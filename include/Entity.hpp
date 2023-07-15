#pragma	once

# include	"./shooter.h"

class Entity
{
private:
	float		x;
	float		y;
	SDL_Texture	*texture;
	SDL_Rect	current_frame;
public:
				Entity(float x, float y, SDL_Texture *texture);
	float		get_x();
	float		get_y();
	SDL_Texture	*get_texture();
	SDL_Rect	get_current_frame();
};
