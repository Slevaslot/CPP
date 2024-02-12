SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
		ShruberryCreationForm.cpp RobotomyRequestForm.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++ -g -Wall -Wextra -Werror -std=c++98
NAME = Aform

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all
