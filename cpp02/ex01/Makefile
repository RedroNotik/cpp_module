
NAME = a.out


FLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRC =   ./main.cpp ./Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re