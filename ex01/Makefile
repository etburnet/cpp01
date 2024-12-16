# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 14:52:36 by eburnet           #+#    #+#              #
#    Updated: 2024/12/13 15:37:04 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
HEADER = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY : all clean fclean re