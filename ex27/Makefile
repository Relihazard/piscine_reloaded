# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:33:40 by agrossma          #+#    #+#              #
#    Updated: 2017/11/07 15:01:02 by agrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= ft_display_file
CC		:= gcc
CCFLAGS	:= -Wall -Wextra -Werror
SRCS	:=\
	main.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_display_file.c
OBJS	:= $(SRCS:.c=.o)

.PHONY: $(NAME) all clean fclean re

$(NAME): all

all: $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
