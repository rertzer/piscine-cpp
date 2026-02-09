CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = tests

SRC_DIR = ./

OBJ_DIR = obj/

INC_DIR = includes/

SOURCES = Account.cpp tests.cpp

OBJ = $(SOURCES:.cpp=.o)

OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
DEPS = $(OBJS:.o=.d)

all: $(NAME) 

bonus: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -c -MMD -MP $< -o $@ -I $(INC_DIR)


$(NAME): $(OBJ_DIR) $(LIBFT) $(OBJS)
	$(CC) $(FLAGS) -o  $@ $(OBJS)

$(OBJ_DIR):
	mkdir  $(OBJ_DIR)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)
	rm -fd $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(SOURCES:.cpp=.d)

.PHONY: all bonus clean fclean re
