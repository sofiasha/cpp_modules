NAME		=	frag

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

%.o:		%.cpp
			c++ $(FLAGS) -std=c++98 -c -o $@ $?

$(NAME):	$(OBJ)
			c++ $(OBJ) -o $(NAME)

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
