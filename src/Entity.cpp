#include	"../include/shooter.h"

Entity::Entity(Vector2f position, SDL_Texture *texture)
	:position(position), texture(texture)
{
	current_frame.x = 0;
	current_frame.y = 0;
	current_frame.w = 32;
	current_frame.h = 32;
}

Vector2f&	Entity::get_position()
{
	return	(position);
}

SDL_Texture	*Entity::get_texture()
{
	return	(texture);
}

SDL_Rect	Entity::get_current_frame()
{
	return	(current_frame);
}
