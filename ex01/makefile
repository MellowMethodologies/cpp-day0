# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 13:11:18 by sbadr             #+#    #+#              #
#    Updated: 2023/08/20 13:11:19 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
SRC= megaphone.cpp Contact.cpp
OBJ= megaphone
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(OBJ)

clean:
	rm $(OBJ)

PHONY:all clean test