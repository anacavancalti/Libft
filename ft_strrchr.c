/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:09:22 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/18 14:30:54 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *found = (NULL);
	    
    i = 0;
    while (s[i] != '\0')
    {
        if(s[i] == c)
        {
            found = ((char *)s + i);
        }
        i++;
    }
    return (found);
}

/*int main(void)
{
    const char string[] = "Anacaval";
    char to_find;
	
    to_find = 'a';
	char *last_occurrence = ft_strrchr(string, to_find);
    if(last_occurrence)
    {
        printf("Last Occurrence:%c\n%s", to_find, last_occurrence);
    }
    else
    {
        printf("Not Found:%c\n", to_find);
    }
    return (0);
}*/