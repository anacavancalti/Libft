/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 09:10:06 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/18 09:32:36 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Converts 'dst' to a character pointer
// Converts 'src' to a constant character pointer
// The return is the original value of dst
// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *destination = dst;
    const char *source = src;
    size_t i;

    i = 0;
    while(i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (dst);
}

/*int main(void)
{
    char destination[] = "canti";
    char source[] = "Anacaval";
    size_t n;

    n = 4;
    printf("Before:%s\n", destination);
    ft_memcpy(destination, source, n);
    printf("After:%s\n", destination);
    return (0);
}*/