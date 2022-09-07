NAME	=	span
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Span.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADERS	=	Span.hpp

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
