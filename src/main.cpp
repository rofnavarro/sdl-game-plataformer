#include	"../include/shooter.h"

int	main(int argc, char **argv)
{
	if (arg_check(argc, argv) != 0)
		std::cout << "Invalid number of argument. You don't need arguments to run the game!" << std::endl;
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		std::cout << "SDL_Init fail. Error: " << SDL_GetError() << std::endl;

	RenderWindow	window("GAME v0.1", SCREEN_WIDTH, SCREEN_HEIGHT);
	bool			game_running;
	SDL_Event		event;
	SDL_Texture		*grass_texture = window.LoadTexture("res/gfx/grass.png");
	Entity			entities[3] = {Entity(0, 0, grass_texture),
									Entity(32, 0, grass_texture),
									Entity(32, 32, grass_texture)};

	game_running = true;
	while (game_running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				game_running = false;
		}
		window.Clear();
		for (int i = 0; i < (int)SDL_arraysize(entities); i++)
			window.Render(entities[i]);
		window.Display();
	}

	window.Destroy();
	SDL_Quit();

	return (EXIT_SUCCESS);
}
