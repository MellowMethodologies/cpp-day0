CC= c++
SRC= megaphone.cpp
OBJ= megaphone
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(OBJ)

clean:
	rm $(OBJ)

test:
	@./megaphone | cat -e
	@./megaphone  Damnit " ! " "Sorry students, I thought this thing was off." | cat -e
	@./megaphone "shhhhh... I think the students are asleep..."| cat -e

PHONY:all clean test