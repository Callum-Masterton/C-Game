#ifndef Game_hpp
#define Game_hpp


#include <SDL.h>

#undef main
#include <iostream>
using namespace std;
#include <stdio.h>




class Game
{
public:
	Game();
	~Game();
	//Count for each update
	int count = 0;

	//Game loop veriables
	//Initalise the loop
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	//Inputs to the loop
	void handleEvents();
	//The updates of the loop
	void update();
	//Images in the loop
	void render();
	//Closes everything
	void clean();

	bool running() { return isRunning; }




private:

	SDL_Window *window;
	SDL_Renderer *renderer;

	bool isRunning;


};


#endif // !GAME_H

