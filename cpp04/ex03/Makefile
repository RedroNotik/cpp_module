
NAME = name

FLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRC =   ./main.cpp ./AMateria.cpp  ./Ice.cpp ./ICharacter.cpp \
		./MateriaSource.cpp ./Cure.cpp

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