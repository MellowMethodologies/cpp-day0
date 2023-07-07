CC= c++
SRC= megaphone.cpp
OBJ= megaphone
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(OBJ)

clean:
	rm $(OBJ)

PHONY:all clean test