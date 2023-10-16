/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 14:17:19 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/15 08:31:51 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// #include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *c;
    size_t i;

    i = 0;
    c = s;
    while(i < n)
    {
        c[i] = '\0';
        i++;
    }
}

/*int main(void)
{
    char s[]= "Ana";
    size_t n;

    n = 8;
    printf("Before: %s\n", s);
    ft_bzero(s, n);
    printf("After: %s\n", s);
    return(0);
}*/
