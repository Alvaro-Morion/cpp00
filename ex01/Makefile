# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 13:03:00 by amorion-          #+#    #+#              #
#    Updated: 2022/03/19 13:56:14 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = contact.cpp main.cpp book.cpp

NAME = Contacts

CC = clang++

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Binary generated"
clean:
	@rm -rf $(OBJS)
	@echo "Object files deleted"
fclean: clean
	@rm -rf $(NAME)
	@echo "Binary deleted"
re: fclean all

.PHONY: re fclean clean all

