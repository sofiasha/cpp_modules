NAME		=	whatever

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:.cpp=.o)

CPP			=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

%.o:		%.cpp
			$(CPP) $(FLAGS) -c -o $@ $?

$(NAME):	$(OBJ)
			$(CPP) $(OBJ) -o $(NAME)

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re