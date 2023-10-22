/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 13:01:17 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/20 14:50:06 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


int     ft_atoi(const char *nptr);
void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	    ft_isalnum(int i);
int	    ft_isalpha(int i);
int     ft_isascii(int i);
int	    ft_isdigit(int i);
int	    ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int	    ft_tolower(int c);
int	    ft_toupper(int c);

    
#endif