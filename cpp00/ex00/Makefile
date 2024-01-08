SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o megaphone $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
