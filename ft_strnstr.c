/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 10:39:29 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/17 19:23:57 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Cast to the address of a char in a string
// locates a substring in a string
// #include <stdio.h>

#include <libft.h>


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (needle[i] != '\0')
    {   
        while(haystack[j] && j <= len)
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

/*int main(void)
{
    char haystack[] = "Cavalcanti";
    char needle[] = "42ti";
    size_t len;

    len = 15;
    char *found = ft_strnstr(haystack, needle, len);
    printf("Comparison:%s\n", found);
    return (0);
}*/