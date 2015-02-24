#include <iostream>
#include <SDL/SDL.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[]){
	SDL_Init( SDL_INIT_VIDEO );
	TTF_Init();
	SDL_Surface* screen = SDL_SetVideoMode( 1366,768, 0,SDL_FULLSCREEN );
	TTF_Font* font = TTF_OpenFont("ARIAL.TTF", 12);
	SDL_Color foregroundColor = { 255, 255, 255 };
	SDL_Color backgroundColor = { 0, 0, 255 };
	SDL_Surface* textSurface = TTF_RenderText_Shaded(font, "This is my text.",foregroundColor, backgroundColor);
	SDL_Rect textLocation = { 100, 100, 0, 0 };
	SDL_Event event;
	bool gameRunning = true;
	while (gameRunning){
		if (SDL_PollEvent(&event)){
			if (event.type == SDL_QUIT){
			gameRunning = false;
			}
		}
	}
	SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0,0));
	SDL_BlitSurface(textSurface, NULL, screen, &textLocation);
	sleep(1000);
	SDL_Flip(screen);
	SDL_FreeSurface(textSurface);
	TTF_CloseFont(font);
	TTF_Quit();
	SDL_Quit();
	return 0;
}
