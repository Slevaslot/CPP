SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = RPN

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all
