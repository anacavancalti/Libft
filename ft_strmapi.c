/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 12:26:20 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:52:13 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new_string;

	if (!s || !f)
	{
		return (NULL);
	}
	index = 0;
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	while (s[index])
	{
		new_string[index] = f(index, s[index]);
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}

char	random_function(unsigned int index, char c)
{
	if (index % 2 == 0 && c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int main(void)
// {
// 	char const string[] = "Anacaval";
// 	char *output = ft_strmapi(string, random_function);
// 	if (output != NULL)
// 	{
// 		printf("String:%s\n", output);
// 	}
// 	else 
// 	{
// 		printf("The memory allocation has failed.\n");
// 	}
// 	return (0);
// }