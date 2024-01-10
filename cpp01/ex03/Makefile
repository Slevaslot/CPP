SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -Wall -Wextra -Werror -std=c++98
NAME = CSgo

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o CSgo $(SRC) 

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
