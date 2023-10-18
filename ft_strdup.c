/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 20:01:34 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/18 21:06:52 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

/*size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}*/

char *ft_strdup(const char *s1)
{
	size_t len = ft_strlen(s1); 
	size_t i;
	char *duplicate;

	i = 0;
	duplicate = (char *)malloc((len + 1) * sizeof(char)); // Allocation of memory for the new string, including space for the null terminator
	if(duplicate == NULL)
	{
		return (NULL);
	}
	while(i < len)
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}

/*int main(void)
{
	char s1[] = "Ana Cavalcanti";
	
	char *duplicate = ft_strdup(s1);
	if(duplicate == NULL)
	{
		printf("Memory allocation has failed.\n");
		return (1);
	}
	printf("Original String:%s\n", s1);
	printf("Duplicate String:%s\n", duplicate);
	return (0);
}*/