#include <iostream>
#include <SDL/SDL.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>
using namespace std;
int main(){
	cout <<"helo\n";
	SDL_Surface* Surf_Display;
	int i=SDL_Init(SDL_INIT_VIDEO);
	SDL_SetVideoMode(640,480,32,SDL_FULLSCREEN);
	int x;
	atexit(SDL_Quit);
		
	return 0;
} 
