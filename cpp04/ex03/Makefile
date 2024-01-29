SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -g -Wall -Wextra -Werror -std=c++98
NAME = Animal

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
