# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 16:13:27 by eburnet           #+#    #+#              #
#    Updated: 2024/12/16 15:24:13 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp 
OBJS = $(SRC:.cpp=.o)
HEADER = 

%.o: %.cpp $(HEADER)
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