SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -Wall -Wextra -Werror -std=c++98
NAME = HI THIS IS BRAIN

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o BrainZ $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
