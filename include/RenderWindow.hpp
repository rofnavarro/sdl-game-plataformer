#ifndef	RENDERWINDOW_HPP
# define	RENDERWINDOW_HPP

# include	"../include/shooter.h"

class RenderWindow
{
private:
	SDL_Window		*window;
	SDL_Renderer	*renderer;
public:
	RenderWindow(const char *title, int width, int height);
};

RenderWindow::RenderWindow(const char *title, int width, int height)
	:window(NULL), renderer(NULL)
{
	window = SDL_CreateWindow(title,
							SDL_WINDOWPOS_UNDEFINED, 
							SDL_WINDOWPOS_UNDEFINED, 
							width, 
							height, 
							SDL_WINDOW_SHOWN);
	if(window == NULL)
		std::cout << "Window failed to init. Error: " << SDL_GetError() << std::endl;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

#endif
