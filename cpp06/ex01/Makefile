# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 16:15:34 by jubaldo           #+#    #+#              #
#    Updated: 2024/09/18 11:24:25 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			seralize	

SRCS			=			Serializer.cpp main.cpp

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