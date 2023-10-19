/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 14:34:24 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/19 11:15:22 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) 
{
    unsigned char *string;
    size_t i;

    i = 0;
    string = ((unsigned char *)s);
    while(i < n)
    {
        if(string[i] == (unsigned char)c) 
        {
            return (string + i); 
        }
        i++;
    }
    return (NULL);
}

/*int main(void)
{
    const char string[] = "Anacaval";
    char c;
    size_t bytes;

    c = 'c';
    bytes = 4;
    char *found = ft_memchr(string, c, bytes);
    printf("Matching byte:%s\n", found);
    return (0);
}*/
