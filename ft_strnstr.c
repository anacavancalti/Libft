/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:11:27 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:15:25 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[j + i] == needle[j]
			&& (i + j) < len && needle[j] != '\0')
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char haystack[] = "Cavalcanti";
//     char needle[] = "val";
//     size_t len;
//
//     len = 30;
//     char *found = ft_strnstr(haystack, needle, len);
//     printf("Haystack:%s - Needle:%s\n", haystack, needle);
//     printf("Found:%s\n", found);
//     return (0);
// }