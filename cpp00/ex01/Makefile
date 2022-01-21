NAME = phonebook

HEADER = ClassPhoneBook.hpp ClassContact.hpp

SRCS = ClassPhoneBook.cpp ClassContact.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp	${HEADER}
	@clang++ $(FLAGS) -I. -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) is ready"

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re:	fclean all
.PHONY:	all clean fclean re