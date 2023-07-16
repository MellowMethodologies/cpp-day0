CC= c++
SRC= megaphone.cpp Contact.cpp
OBJ= megaphone
FLAGS= -Wall -Wextra -Werror 

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(OBJ)

clean:
	rm $(OBJ)

PHONY:all clean test