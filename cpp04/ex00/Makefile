NAME		=	animal

SRC			=	$(wildcard *.cpp)

OBJ			=	$(SRC:%.cpp=%.o)

DEP			=	$(OBJ:%.o=%.d)

CPPFLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow

RM			=	rm -f

$(NAME):	$(OBJ)
			c++ $^ -o $@

-include	$(DEP)

%.o:		%.cpp
			c++ $(CPPFLAGS) -std=c++98 -MMD -c $< -o $@

all:		$(NAME)

run:		$(NAME)
			./$(NAME)

clean:
			$(RM) $(OBJ) $(DEP)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

