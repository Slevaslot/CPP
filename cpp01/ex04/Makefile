SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -g -Wall -Wextra -Werror -std=c++98
NAME = Sed

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
