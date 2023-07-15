#include	"../include/shooter.h"

Entity::Entity(float x, float y, SDL_Texture *texture)
	:x(x), y(y), texture(texture)
{
	current_frame.x = 0;
	current_frame.y = 0;
	current_frame.w = 32;
	current_frame.h = 32;
}

float	Entity::get_x()
{
	return (x);
}

float	Entity::get_y()
{
	return (y);
}

SDL_Texture	*Entity::get_texture()
{
	return	(texture);
}

SDL_Rect	Entity::get_current_frame()
{
	return	(current_frame);
}
