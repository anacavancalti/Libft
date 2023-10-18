/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 14:34:24 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/18 15:21:17 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) 
{
    const unsigned char *str;
    size_t i;

    i = 0;
    str = ((const unsigned char *)s);
    while(i < n)
    {
        if(str[i] == (unsigned char)c) // finds the first instance of c
        {
            return ((void *)&str[i]); 
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char string[] = "Anacaval";
    char c;
    size_t bytes;

    c = 'c';
    bytes = 3;
    ft_memchr(string, c, bytes);
    printf("Matching byte:%s\n", string);
    return (0);
}
