SRC = mapb.cpp PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = mapb

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o mapb $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
