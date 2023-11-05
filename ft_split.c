/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 18:56:41 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/11/05 10:10:45 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_clean(char **matrix)
{
	size_t	word;

	word = 0;
	while (matrix[word])
	{
		free(matrix[word]);
		word++;
	}
	free(matrix);
	return (NULL);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_number;

	word_number = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		if (*s != c && *s)
		{
			word_number++;
			while (*s != c && *s)
			{
				s++;
			}
		}
	}
	return (word_number);
}

static char	**ft_content_matrix(char **matrix, const char *s, char c)
{
	size_t	index;
	size_t	word_content;
	size_t	s_start;

	index = 0;
	word_content = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			index++;
		else
		{
			s_start = index;
			while (s[index] != '\0' && s[index] != c)
				index++;
			matrix[word_content] = ft_substr(s, s_start, index - s_start);
			if (matrix[word_content] == NULL)
				return (ft_clean(matrix));
			word_content++;
		}
	}
	matrix[word_content] = (NULL);
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**matrix;

	if (!s)
	{
		return (NULL);
	}
	words = ft_count_words(s, c);
	matrix = (char **)malloc (sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	matrix = ft_content_matrix(matrix, s, c);
	if (!matrix)
	{
		return (NULL);
	}
	matrix[words] = (NULL);
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