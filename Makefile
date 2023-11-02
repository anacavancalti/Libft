# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anacaval <anacaval@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/18 11:26:25 by anacaval      #+#    #+#                  #
#    Updated: 2023/11/02 17:16:04 by anacavalcan   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rsc

RM = rm -f
	
SOURCES =	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putstr_fd.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_split.c \

OBJECTS = $(SOURCES:%.c=%.o)	   

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS) 

%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 