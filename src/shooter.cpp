#include "../include/shooter.h"

using namespace std;

int	main(int argc, char **argv)
{
	if (arg_check(argc, argv) != 0)
		std::cout << "Invalid number of argument. You don't need arguments to run the game!" << std::endl;
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		std::cout << "SDL_Init fail. Error: " << SDL_GetError() << std::endl;

	RenderWindow	window("teste", SCREEN_WIDTH, SCREEN_HEIGHT);
	bool		game_running;
	SDL_Event	event;

	game_running = true;
	while (game_running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				game_running = false;
		}
	}

	window.Destroy();
	SDL_Quit();

	return (EXIT_SUCCESS);
}
