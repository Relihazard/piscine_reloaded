# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 16:32:46 by agrossma          #+#    #+#              #
#    Updated: 2017/11/06 16:44:44 by agrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= libft
CC				:= gcc
CCFLAGS			:= -Wall -Wextra -Werror
AR				:= ar
ARFLAGS			:= rc
RANLIB			:= ranlib
SRCS_DIR		:= srcs/
INCLUDES-DIR	:= includes/
SRCS			:= \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c
OBJS			:= $(SRCS:.c=.O)

.PHONY: $(NAME) all clean fclean re

$(NAME): all

all: $(OBJS)

%.o: $(SRCS_DIR)/%.c
	$(CC) $(CCFLAGS) -c $< -o $@

