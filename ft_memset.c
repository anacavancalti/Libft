/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 19:24:06 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/17 20:48:35 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *pointer;

    i = 0;
    pointer = ((unsigned char *)b);
    while(i < len)
    {
        pointer[i] = ((unsigned char)c);
        i++;
    }
    return (b);
}

/*int main(void)
{
    char string[] = "Anacaval";
    unsigned char c;
    size_t lengh;

    lengh = 3;
    c = 'C';
    printf("Before:%s\n", string);
    ft_memset(string, c, lengh);
    printf("After:%s\n", string);
    return (0);
}*/
