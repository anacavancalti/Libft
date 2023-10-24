/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 09:49:00 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/24 11:10:01 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Returns a copy of s1 without set 
// The chars from set are removed from the string (at the start and end of the string)

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int start_set;
	int end_set;

	start_set = 0;
	if (!s1 || !set)
	{
		return (NULL);
	}
	end_set = ft_strlen(s1);
	while (s1[start_set] && ft_strchr(set, s1[start_set]))
	{
		start_set++;
	}
	while (end_set && ft_strrchr(set, s1[end_set]))
	{
		end_set--;
	}
	return (ft_substr((start_set + s1), 0, end_set - start_set + 1));
}

// int main(void)
// {
// 	char const string[] = " Ana Cavalcanti ";
// 	char const set[] = " ";
	
// 	char *trimmed = ft_strtrim(string, set);
// 	printf("Original String:%s\n", string);
// 	printf("Trimmed String:%s\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }