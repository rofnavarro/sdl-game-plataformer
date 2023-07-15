#pragma	once

# include	"./shooter.h"

class	Entity
{
private:
	Vector2f	position;
	SDL_Texture	*texture;
	SDL_Rect	current_frame;
public:
				Entity(Vector2f position, SDL_Texture *texture);
	Vector2f& 	get_position();
	SDL_Texture	*get_texture();
	SDL_Rect	get_current_frame();
};
