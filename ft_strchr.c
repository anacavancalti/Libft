/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:17:26 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 11:01:02 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Line 26 (Cast) - Endereço do char dentro de um string

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {   
        if (s[i] == c)
        {
            return ((char *)&s[i]); 
        }
        i++;  
    }
    return (NULL);
}

/*int main(void)
{
    char to_find;
    char string[] = "AnaCaval";


    to_find = 'B';
    if (ft_strchr(string, to_find))
    {
        printf("Found:%c\n", to_find);
    }
    else
    {
        printf("NotFound:%c\n", to_find);
    }
    return (0);
}*/