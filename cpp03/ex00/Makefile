SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -g -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
