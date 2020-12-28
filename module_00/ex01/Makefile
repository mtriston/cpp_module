NAME = phonebook

SRC = main.cpp Contact.cpp Phonebook.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CC_FLAGS = 

all: $(NAME)

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
