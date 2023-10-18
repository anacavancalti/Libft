/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:11:27 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/18 10:51:32 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Cast to the address of a char in a string
// Locates a substring in a string
#include <stdio.h>
// #include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(needle[i] != '\0')
    {
        while(j <= len && haystack[j] != '\0')
        {
            if(haystack[j] == needle[i])
            {
                return ((char *)&needle[i]);
            }
            j++;
        }
        i++;
        j = 0;
    }
    return (NULL);
}

int main(void)
{
    char haystack[] = "Cavalcanti";
    char needle[] = "42ti";
    size_t len;

    len = 15;
    char *found = ft_strnstr(haystack, needle, len);
    printf("Haystack:%s\n", haystack);
    printf("Found:%s\n", found);
    return (0);
}