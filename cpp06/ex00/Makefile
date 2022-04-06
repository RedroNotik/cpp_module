
NAME = name

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./ -MMD

SRC =   ./main.cpp ./Convert.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

dep = ./dep

obj = ./obj

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ)
	@mv $(OBJ) $(obj)
	@mv $(DEP) $(dep)


clean:
	rm -rf $(dep)/*
	rm -rf $(obj)/*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

include $(wildcard $(DEP))