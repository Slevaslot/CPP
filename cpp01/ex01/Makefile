SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ - -Wall -Wextra -Werror -std=c++98
NAME = BrainZ

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o BrainZ $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
