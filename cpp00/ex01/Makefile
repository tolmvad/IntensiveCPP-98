NAME	=	phonebook
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Contact.cpp PhoneBook.cpp
OBJ		=	$(SRC:.cpp=.o)

HEADERS	=	Contact.hpp PhoneBook.hpp

%.o: %.cpp
			$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm $(OBJ)

fclean:		clean
			rm $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
