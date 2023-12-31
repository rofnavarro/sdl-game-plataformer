#pragma	once

# include	"./shooter.h"

class	RenderWindow
{
private:
	SDL_Window		*window;
	SDL_Renderer	*renderer;
public:
					RenderWindow(const char *title, int width, int height);
	SDL_Texture		*LoadTexture(const char *filepath);
	void			Render(Entity& entity);
	void			Display();
	void			Clear();
	void			Destroy();
};
