# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anacaval <anacaval@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/18 11:26:25 by anacaval      #+#    #+#                  #
#    Updated: 2023/10/20 14:24:05 by anacaval      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

	LIBRARY = Libft
	NAME = $(LIBRARY).a
		
	SOURCES = ft_atoi.c \
			  ft_bzero.c \
			  ft_calloc.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isprint.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memset.c \
			  ft_strchr.c \
			  ft_strdup.c \
			  ft_strlcat.c \
			  ft_strlcpy.c \
			  ft_strlen.c \
			  ft_strncmp.c \
			  ft_strnstr.c \
			  ft_tolower.c \
			  ft_toupper.c
	
	OBJECTS = $(SOURCES: .c=.o)	   
	
	CC = cc
	CFLAGS = -Wall -Wextra -Werror -I. -c

	AR = ar -rc

	RM = rm -rf

	all: $(NAME)
	
	$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

	$(OBJECTS): $(SOURCES)
		$(CC) $(CFLAGS) $(SOURCES)

	clean:
		$(RM) $(OBJECTS)
	
	fclean:
		$(RM) $(NAME) $(OBJECTS)

	re: fclean all

	.PHONY: all clean fclean re
		