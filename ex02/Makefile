# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 16:13:27 by eburnet           #+#    #+#              #
#    Updated: 2024/12/14 10:17:24 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SRCS = main.cpp
OBJS = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re