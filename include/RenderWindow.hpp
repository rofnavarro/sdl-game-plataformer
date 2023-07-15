#pragma	once

# include	"./shooter.h"

class RenderWindow
{
private:
	SDL_Window		*window;
	SDL_Renderer	*renderer;
public:
	RenderWindow(const char *title, int width, int height);
	void	Destroy();
};
