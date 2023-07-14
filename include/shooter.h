#ifndef	SHOOTER_H
# define	SHOOTER_H

# include	<iostream>
# include	<SDL2/SDL.h>
# include	<SDL2/SDL_image.h>

# define	TRUE	1
# define	FALSE	0

# define	SCREEN_WIDTH	1280
# define	SCREEN_HEIGHT	720

typedef	struct s_application
{
	SDL_Window		*win;
	SDL_Renderer	*rend;
}	t_application;

#endif