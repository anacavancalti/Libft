/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 19:00:35 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/22 20:58:21 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *substring;
	
	i = 0;
	size_t string_size = ft_strlen(s); // Size of original string 
	size_t malloc_size = len; // Memory size is initialized with the defined length
	if (string_size <= len) // Avoiding to have more memory size than the necessary
	{ 
		malloc_size = string_size;
	}
	substring = (char *)malloc(sizeof(*s) * (malloc_size + 1));
	if (substring == 0)
	{
		return (NULL);
	}
	while (i <= len && s[i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}

// int main(void)
// {
// 	char const string[] = "Ana Cavalcanti";
// 	unsigned int start;
// 	size_t maximum_len;

// 	start = 4;	
// 	maximum_len = 4;
// 	char *substring = ft_substr(string, start, maximum_len);
// 	printf("Substring:%s\n", substring);
// 	return (0);
// }