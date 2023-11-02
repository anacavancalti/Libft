/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 10:25:31 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:15:47 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	final_substring;
	char	*substring;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		final_substring = 0;
	else
		final_substring = ft_strlen(s) - start;
		
	if (final_substring > len)
		final_substring = len;
	
	substring = malloc((final_substring + 1));
	
	if (substring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < final_substring)
		{
			substring[j] = s[i];
			j++;
		}
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

int main(void)
{
	char string[] = "Ana Cavalcanti Moreira";
	unsigned int start_index;
	size_t maximum_len;

	start_index = 3;
	maximum_len = 10;
	char *substring = ft_substr(string, start_index, maximum_len);
	printf("substring:%s\n", substring);
	return (0);
}