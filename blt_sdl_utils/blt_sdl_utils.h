#ifndef BLT_SDL_UTILS_H
#define BLT_SDL_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL.h>

void blt_bits_to_pixels(
	uint32_t* pixels,
	const char* bits,
	uint32_t bytes_per_row,
	uint32_t row_count,
	uint8_t r, uint8_t g, uint8_t b)
{
    const size_t BITS_IN_BYTE = 8;

    uint32_t target_color =
		(r << 3 * BITS_IN_BYTE) |
		(g << 2 * BITS_IN_BYTE) |
		(b << 1 * BITS_IN_BYTE);

	for (int row = 0; row < row_count; row++)
	{
		for (int col = 0; col < BITS_IN_BYTE * bytes_per_row ; col++)
		{
			int bit_col = col % BITS_IN_BYTE;
			int current_byte = (row * bytes_per_row) + (col / BITS_IN_BYTE);

			uint32_t pixel = 0;

			if ((bits[current_byte] & (1 << (BITS_IN_BYTE - 1 - bit_col))) > 0)
			{
				pixel = target_color | 0xFF;
			}

			pixels[col + row * BITS_IN_BYTE * bytes_per_row] = pixel;

			printf("%c", pixel > 0 ? '0' : '.');
		}
		printf("\n");
	}
	printf("\n");
}

// Maps data to pixels in a SDL_Texture
// @param rend: SDL renderer to use
// @param data: byte array
// @param side_size: size of side of a squared element
// @param elem_count: how many elements
// @param r: red
// @param g: green
// @param b: blue
SDL_Texture* blt_data_to_texture(
    SDL_Renderer* rend,
    const char** data,
    uint32_t bytes_per_row,
    uint32_t row_count,
    uint32_t elem_count,
    uint8_t r, uint8_t g, uint8_t b)
{
    uint32_t col_count = bytes_per_row * 8;

    Uint32 rmask, gmask, bmask, amask;
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    rmask = 0xff000000;
    gmask = 0x00ff0000;
    bmask = 0x0000ff00;
    amask = 0x000000ff;
#else
    rmask = 0x000000ff;
    gmask = 0x0000ff00;
    bmask = 0x00ff0000;
    amask = 0xff000000;
#endif

    uint32_t* pixel_data = (uint32_t*)malloc(sizeof(*pixel_data) * col_count * row_count * elem_count);

    for (int i = 0; i < elem_count; i++)
    {
        uint32_t elem = i * col_count * row_count;
    blt_bits_to_pixels(&pixel_data[elem], &data[i], bytes_per_row, row_count, r, g, b);
    }
    // creating a vertical strip surface of the elements
    // pixel_data holds each row of a character continuously, so vstrip is easier to load
    SDL_Surface* surf = SDL_CreateRGBSurfaceFrom(
        (void*)pixel_data,               // 0xRRGGBBAA for each pixel
        col_count,                       // width
        row_count * elem_count,          // height
        32,                              // depth
        col_count * sizeof(*pixel_data), // pitch (length of a row of pixels in bytes)
        rmask, gmask, bmask, amask);     // color mask

    SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, surf);

    SDL_FreeSurface(surf);
    free(pixel_data);

    return tex;
}




///////////
/* FONT */
///////////

typedef struct blt_font_t {
    uint32_t length;
    uint32_t bytes_per_row;
    uint32_t rows_per_character;
    uint32_t scale;
    SDL_Renderer* rend;
    SDL_Texture* tex;
    char* data;
} blt_font_t;

const BLT_FONT_PRINTABLE_START = 32;

int blt_font_char_offset(char c) {
    return c - BLT_FONT_PRINTABLE_START;
}

// Create font
void blt_font_create(blt_font_t* out,
    SDL_Renderer* rend, const char** data, uint32_t bytes_per_row, uint32_t rows_per_character, uint32_t length,
    uint8_t red, uint8_t green, uint8_t blue) {

    out->length = length;
    out->bytes_per_row = bytes_per_row;
    out->rows_per_character = rows_per_character;
    out->data = data;
    out->scale = 1;
    out->rend = rend;
    out->tex = blt_data_to_texture(rend, data, bytes_per_row, rows_per_character, length, red, green, blue);
}

void blt_font_destroy(blt_font_t* font)
{
    SDL_DestroyTexture(font->tex);
}

// draw text
void blt_draw_text(blt_font_t* font, const char* str, uint32_t x, uint32_t y)
{
    int w = font->bytes_per_row * 8;
    int h = font->rows_per_character;
    int scale = font->scale;
    SDL_Rect sr = { 0, 0, w, h }; // change y to get a different character
    SDL_Rect dr = { x, y, w * scale, h * scale }; // change x to print a char next to another

    size_t len = strlen(str);
    for (size_t i = 0; i < len; i++) {
        char c = str[i];
        int offset = c - BLT_FONT_PRINTABLE_START;
        sr.y = h * offset;
        dr.x = x + i * w * scale;
        SDL_RenderCopy(font->rend, font->tex, &sr, &dr);
    }
}


#endif // !BLT_SDL_UTILS_H

