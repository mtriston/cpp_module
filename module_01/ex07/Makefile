NAME = replace

CC = clang++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all