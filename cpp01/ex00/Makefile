NAME		=	zombie

HEADER		=	$(wildcard *.hpp)

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

%.o:		%.cpp
			g++ $(FLAGS) -std=c++98 -c -o $@ $?

$(NAME):	$(OBJ)
			g++ $(OBJ) -o $(NAME)

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
