#include "../include/shooter.h"

using namespace std;

int	main(int argc, char **argv)
{
	if (arg_check(argc, argv) != 0)
		std::cout << "Invalid number of argument. You don't need arguments to run the game!" << std::endl;
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		std::cout << "SDL_Init fail. Error: " << SDL_GetError() << std::endl;

	RenderWindow("teste", SCREEN_WIDTH, SCREEN_HEIGHT);
	return (EXIT_SUCCESS);
}
