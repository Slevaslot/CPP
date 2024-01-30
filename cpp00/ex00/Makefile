SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o megaphone $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
