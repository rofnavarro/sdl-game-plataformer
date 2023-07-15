#include	"../include/shooter.h"

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

SDL_Texture	*RenderWindow::LoadTexture(const char *filepath)
{
	SDL_Texture	*texture;

	texture = NULL;
	texture = IMG_LoadTexture(renderer, filepath);
	if (texture == NULL)
		std::cout << "Failed to lead texture. Error: " << SDL_GetError() << std::endl;
	return (texture);
}

void	RenderWindow::Render(Entity& entity)
{
	SDL_Rect	src;
	SDL_Rect	dst;

	src.x = entity.get_current_frame().x;
	src.y = entity.get_current_frame().y;
	src.w = entity.get_current_frame().w;
	src.h = entity.get_current_frame().h;
	
	dst.x = entity.get_x() * 4;
	dst.y = entity.get_y() * 4;
	dst.w = entity.get_current_frame().w * 4;
	dst.h = entity.get_current_frame().h * 4;
	SDL_RenderCopy(renderer, entity.get_texture(), &src, &dst);
}

void	RenderWindow::Display()
{
	SDL_RenderPresent(renderer);
}

void	RenderWindow::Clear()
{
	SDL_RenderClear(renderer);
}

void	RenderWindow::Destroy()
{
	SDL_DestroyWindow(window);
}
