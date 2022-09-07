NAME	=	bureaucrat
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Bureaucrat.cpp Form.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADERS	=	Bureaucrat.hpp Form.hpp\
			PresidentialPardonForm.hpp\
			RobotomyRequestForm.hpp\
			ShrubberyCreationForm.hpp

%.o: %.cpp $(HEADERS)
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
