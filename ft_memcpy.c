/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 20:59:20 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/17 21:31:09 by anacavalcan   ########   odam.nl         */
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
    char destination[] = " ";
    char source[] = "Anacaval";
    size_t n;

    n = 5;
    printf("Before:%s\n", destination);
    ft_memcpy(destination, source, n);
    printf("After:%s\n", destination);
    return (0);
}*/