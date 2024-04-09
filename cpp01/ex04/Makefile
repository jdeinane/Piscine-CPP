# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 16:08:41 by jubaldo           #+#    #+#              #
#    Updated: 2024/04/09 16:17:10 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			sid

SRCS			=			main.cpp

CC				=			c++

CFLAGS			=			-Wall -Wextra -Werror -std=c++98

RM				=			rm -rf

OBJS			=			$(SRCS:.cpp=.o)

all				:			$(NAME)

$(NAME)			:			$(OBJS)
								$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o				:			%.cpp
								$(CC) $(CFLAGS) -c $< -o $@

clean			:
								$(RM) $(OBJS)

fclean			:			clean
								$(RM) $(NAME)

re				:			fclean all

prog			:			all clean
									clear
											
.PHONY			:			all clean fclean re