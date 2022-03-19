
NAME = name


FLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRC =   ./main.cpp ./Weapon.cpp ./HumanA.cpp\
		./HumanB.cpp

INCL = ./Weapon.hpp ./HumanA.hpp\
       		./HumanB.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ)

%.o: %.cpp %.hpp
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re