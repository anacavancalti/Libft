/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 10:39:29 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 17:48:00 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// locates a substring in a string

// #include <libft.h>
#include <stdio.h>

char ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char found;
    size_t i;

    i = 0;
}



int main(void)
{
    char haystack[] = "Cavalcanti";
    char needle[] = "val";
    size_t len;

    len = 4;
    char found = ft_strnstr(haystack, needle, len);
    printf("Comparison:%c\n", found);
    return (0);
}