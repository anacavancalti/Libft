/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:12:15 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/25 18:10:07 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	unsigned int	i;

	chr = (unsigned char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != chr)
	{
		i++;
	}
	if (s[i] == chr)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// int main(void)
// {
//     char to_find;
//     const char string[] = "Anacaval";
   
//     to_find = 'c';
//     if (ft_strchr(string, to_find))
//     {
//         printf("Found:%c\n", to_find);
//     }
//     else
//     {
//         printf("Not Found:%c\n", to_find);
//     }
//     return (0);
// }