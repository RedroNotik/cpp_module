
NAME = name

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./ -MMD

SRC =   ./main.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ)


clean:
	rm -rf $(OBJ) $(DEP)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

include $(wildcard $(DEP))