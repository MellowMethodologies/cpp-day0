CC= c++
SRC= tests.cpp Account.cpp
NAME= Account
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm $(NAME)

PHONY:all clean test