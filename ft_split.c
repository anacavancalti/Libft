/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 18:56:41 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/11/02 17:14:26 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_clean(char **matrix)
{
	size_t	string_number;

	string_number = 0;
	while (matrix[string_number])
	{
		free(matrix[string_number]);
		string_number++;
	}
	free(matrix);
	return (NULL);
}

static size_t	ft_count_strings(char const *s, char c)
{
	size_t	s_count;

	s_count = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		if (*s != c && *s)
		{
			s_count++;
			while (*s != c && *s)
			{
				s++;
			}
		}
	}
	return (s_count);
}

static char	**ft_content_matrix(char **matrix, const char *s, char c)
{
	size_t	index;
	size_t	s_count;
	size_t	s_start;

	index = 0;
	s_count = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			index++;
		else
		{
			s_start = index;
			while (s[index] != '\0' && s[index] != c)
				index++;
			matrix[s_count] = ft_substr(s, s_start, index - s_start);
			if (matrix[s_count] == NULL)
				return (ft_clean(matrix));
			s_count++;
		}
	}
	matrix[s_count] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	size_t	s_count;
	char	**matrix;

	if (!s)
	{
		return (NULL);
	}
	s_count = ft_count_strings(s, c);
	matrix = (char **)malloc (sizeof(char *) * (s_count + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	matrix = ft_content_matrix(matrix, s, c);
	if (!matrix)
	{
		return (NULL);
	}
	matrix[s_count] = (NULL);
	return (matrix);
}

// int main(void)
// {
// 	char **matrix;
// 	char const s[] = "Ana Cristina Cavalcanti";
// 	char c = ' ';
// 	size_t index;

// 	matrix = ft_split(s, c);
// 	index = 0;
// 	while (matrix[index])
// 	{
// 		printf("%s\n", matrix[index]);
// 		index++;
// 	}
// }