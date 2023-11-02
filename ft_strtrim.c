/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 12:54:23 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:15:39 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_set;
	size_t	end_set;

	start_set = 0;
	end_set = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[start_set] && ft_strchr(set, s1[start_set]))
	{
		start_set++;
	}
	while (end_set > 0 && s1[end_set - 1] && ft_strrchr(set, s1[end_set - 1]))
	{
		end_set--;
	}
	return (ft_substr(s1 + start_set, 0, end_set - start_set));
}

// int main(void)
// {
// 	char const s1[] = " Ana Cavalcanti ";
// 	char const set[] = " ";
// 
// 	char *string_without_set = ft_strtrim(s1, set);
// 	printf("Original String:%s\n", s1);
// 	printf("String Without Set:%s\n", string_without_set);
// 	return (0);
// }