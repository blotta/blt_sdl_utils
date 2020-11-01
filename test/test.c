#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <SDL.h>

#include "test8x8_font.h"
#include "blt_sdl_utils.h"

int main()
{
    blt_print_msg();

    const WIDTH = 800;
	const HEIGHT = 600;


    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow(
        "Custom Font", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    SDL_Renderer* rend = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);


    blt_font_t font88;
    blt_font_create(&font88, rend, FONT_8X8_BASIC, 1, 8, FONT_8X8_BASIC_LENGTH, 0xFF, 0xFF, 0xFF);
    font88.scale = 2;

    srand((unsigned)time(NULL));

    bool quit = false;
    SDL_Event e;

    Uint32 currTick = 0;
    Uint32 lastTick = SDL_GetTicks();
    float deltaTime = 0.f;

    while (!quit)
    {
        // -- input
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
            else if (e.type == SDL_KEYDOWN)
            {
                switch (e.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    quit = true;
                    break;
                }
            }
        }

        currTick = SDL_GetTicks();

        deltaTime = (currTick - lastTick) / 1000.f;


        // -- update

        // -- draw
        SDL_SetRenderDrawColor(rend, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(rend);

        blt_draw_text(&font88, "HELLO WORLD!", 30, 30);

        SDL_RenderPresent(rend);

        lastTick = currTick;
    }

    blt_font_destroy(&font88);

    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

