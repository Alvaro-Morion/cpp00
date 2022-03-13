# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 12:45:37 by amorion-          #+#    #+#              #
#    Updated: 2022/03/13 13:10:04 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

NAME = megaphone

CC = clang++

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean 
	rm -rf $(NAME)
re: fclean all

PHONY = re fclean clean all
