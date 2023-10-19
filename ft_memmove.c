/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:49:07 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/19 09:34:11 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory in a temporary array

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    char *destination = dst;
    const char *source = src;
    char temporary[n];
    size_t i;

    i = 0;
    while(i < n)
    {
        temporary[i] = source[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        destination[i] = temporary[i];
        i++;
    }
    return (dst);
}

/*int main(void)
{
    char destination[] = " ";
    char source[] = "Ana Cavalcanti";
    size_t bytes;

    bytes = 4;
    char *original = ft_memmove(destination, source, bytes); 
    printf("Original:%s\n", original);
    printf("Source:%s\n", source);
    printf("Destination:%s\n", destination);
    return (0);
}*/