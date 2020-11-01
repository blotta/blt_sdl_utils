#ifndef BLT_SDL_UTILS_H
#define BLT_SDL_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL.h>

void blt_print_msg();

void blt_bits_to_pixels(
    uint32_t* pixels,
    const char* bits,
    uint32_t bytes_per_row,
    uint32_t row_count,
    uint8_t r, uint8_t g, uint8_t b);

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
    uint8_t r, uint8_t g, uint8_t b);




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

// Create font
void blt_font_create(blt_font_t* out,
    SDL_Renderer* rend, const char** data, uint32_t bytes_per_row, uint32_t rows_per_character, uint32_t length,
    uint8_t red, uint8_t green, uint8_t blue);

void blt_font_destroy(blt_font_t* font);

// draw text
void blt_draw_text(blt_font_t* font, const char* str, int32_t x, int32_t y);

#endif // !BLT_SDL_UTILS_H

