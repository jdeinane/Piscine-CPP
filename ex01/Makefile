# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 22:22:22 by jubaldo           #+#    #+#              #
#    Updated: 2024/03/25 15:17:38 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	contact.cpp phonebook.cpp main.cpp

NAME		=	phonebook

OBJ			=	$(SRCS:.cpp=.o)

CC			=	c++

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