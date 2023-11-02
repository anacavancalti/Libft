/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:09:22 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/30 21:18:42 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
//     const char string[] = "Ana Cavalcanti";
//     char to_find;
//     to_find = 'a';
// 	char *last_occurrence = ft_strrchr(string, to_find);
//     if(last_occurrence)
//     {
//         printf("Last Occurrence:%c\n%s", to_find, last_occurrence);
//     }
//     else
//     {
//         printf("Not Found:%c %s\n", to_find, last_occurrence);
//     }
//     return (0);
// }