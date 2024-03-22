# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 22:22:22 by jubaldo           #+#    #+#              #
#    Updated: 2024/03/22 19:42:13 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	Account.cpp tests.cpp

NAME		=	account

OBJ			=	$(SRCS:.cpp=.o)

CC			=	g++

RM			=	rm -rf

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
			$(RM) $(NAME) $(OBJ)

re:			fclean $(NAME)

.PHONY:		all clean fclean re