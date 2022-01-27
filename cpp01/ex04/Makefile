NAME		=	replace

HEADER		=	$(wildcard *.hpp)

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

%.o:		%.cpp
			c++ $(FLAGS) -std=c++98 -c -o $@ $?

$(NAME):	$(OBJ)
			c++ $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
