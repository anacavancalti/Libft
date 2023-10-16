# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anacavalcanti <anacavalcanti@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/16 09:36:49 by anacavalcan   #+#    #+#                  #
#    Updated: 2023/10/16 09:55:10 by anacavalcan   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

	CC = cc
	CFLAGS = -Wall -Wextra -Werror
	
	SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	ft_isprint.c ft_srechr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

	OBJS = $(SRCS: .c=.o)
	all: $(NAME)

