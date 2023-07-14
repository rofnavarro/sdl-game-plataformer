NAME					=					shooter

CPP						=					g++
CPP_FLAGS				=					-std=c++14 -m64 -g -Wall -Werror -Wextra

LIB						=					-lSDL2 -lSDL2_image

RM						=					rm -rf

INCLUDE_DIR				=					./include
INCLUDE_FILES			=					shooter.h
INCLUDE					=					$(addprefix $(INCLUDE_DIR)/, $(INCLUDE_FILES))

SRC_DIR					=					./src
SRC_FILES				=					shooter.cpp
SRC						=					$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR					=					./obj
OBJ						=					$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

RESET					= 					\033[0m
GREEN		 			= 					\033[38;5;46m

$(OBJ_DIR)/%.o:			$(SRC_DIR)/%.cpp $(INCLUDE)
						$(CPP) $(CPP_FLAGS) -c $< -o $@

all:					$(NAME)

$(NAME):				$(OBJ_DIR) $(OBJ) $(INCLUDE)
						$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)
						@echo "$(GREEN)Executable OK!	$(RESET)"

$(OBJ_DIR):
						@mkdir -p $(OBJ_DIR)

run:
						./$(NAME)

runv:					all
						valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./$(NAME)

clean:
						@$(RM) $(OBJ_DIR)
						@echo "$(GREEN)Object files removed $(RESET)"

fclean:					clean
						@$(RM) $(NAME)
						@echo "$(GREEN)Executable removed $(RESET)"

re:						fclean all

.PHONY:					all clean fclean re