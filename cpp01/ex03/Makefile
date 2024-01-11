SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -Wall -Wextra -Werror -std=c++98
NAME = UnjustifiedViolence

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC) 

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
