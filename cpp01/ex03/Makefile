NAME	=	human
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ		=	$(SRC:.cpp=.o)

HEADERS	=	HumanA.hpp HumanB.hpp Weapon.hpp

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
