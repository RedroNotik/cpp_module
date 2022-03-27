
NAME = name

FLAGS = -Wall -Wextra -Werror -std=c++98 -I./ #-Wshadow -Wno-shadow

SRC =   ./main.cpp ./Animal.cpp ./Dog.cpp ./Cat.cpp \
		./WrongAnimal.cpp ./WrongCat.cpp ./Brain.cpp

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