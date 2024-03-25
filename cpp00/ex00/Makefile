# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 09:38:05 by jubaldo           #+#    #+#              #
#    Updated: 2024/03/25 15:31:55 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			megaphone

SRCS			=			megaphone.cpp

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