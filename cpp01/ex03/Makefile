NAME		=	human

HEADER		=	$(wildcard *.hpp)

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

%.o:		%.cpp
			clang++ $(FLAGS) -std=c++98 -c -o $@ $?

$(NAME):	$(OBJ)
			clang++ $(OBJ) -o $(NAME)

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re