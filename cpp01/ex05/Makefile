SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -g -Wall -Wextra -Werror -std=c++98
NAME = Harl

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o Harl $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
