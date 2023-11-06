/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 10:25:31 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/06 14:17:45 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	end_substring;
	char	*substring;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		end_substring = 0;
	else
		end_substring = ft_strlen(s) - start;
	if (end_substring > len)
		end_substring = len;
	substring = malloc((end_substring + 1));
	if (substring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < end_substring)
			substring[j++] = s[i];
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

// int main(void)
// {
// 	char string[] = "Ana Cristina Cavalcanti";
// 	unsigned int start_index;
// 	size_t maximum_len;

// 	start_index = 3;
// 	maximum_len = 10;
// 	char *substring = ft_substr(string, start_index, maximum_len);
// 	printf("substring:%s\n", substring);
// 	return (0);
// }