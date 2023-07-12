NAME					=					shooter

INCLUDE_PATH			=					./include

CPP						=					g++
CPP_FLAGS				=					-std=c++14 -m64 -g -Wall -Werror -Wextra -I ${INCLUDE_PATH}

LIB						=					-lSDL2 -lSDL2_image

RM						=					rm -rf

SRC						=					shooter.cpp 

OBJ						=					$(SRC:%.cpp=%.o)

all:					$(NAME)

$(NAME):				$(OBJ)
						$(CPP) -c $(CPP_FLAGS) $(LIB) $(OBJ) -o $(NAME)

clean:
						$(RM) $(OBJ)

fclean:					clean
						$(RM) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re