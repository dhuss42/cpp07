# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 08:53:01 by dhuss             #+#    #+#              #
#    Updated: 2025/04/29 14:51:20 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFILES = main.cpp
OFILES = $(CPPFILES:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++17
NAME = ex01

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean