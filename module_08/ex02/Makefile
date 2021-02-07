NAME = mutantstack

SRC = main.cpp MutantStack.cpp

HEADER = MutantStack.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re