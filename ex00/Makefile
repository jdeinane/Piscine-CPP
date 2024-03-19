# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 09:38:05 by jubaldo           #+#    #+#              #
#    Updated: 2024/03/19 09:41:04 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	megaphone.cpp

NAME		=	megaphone

CC			=	clang++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

all:		$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re