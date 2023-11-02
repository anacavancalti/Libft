/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 09:35:50 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 14:45:22 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first_string;
	unsigned char	*second_string;
	unsigned int	i;

	first_string = ((unsigned char *)s1);
	second_string = ((unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (first_string[i] != second_string[i])
		{
			return (first_string[i] - second_string[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char first_string[] = "Cavalcanti";
//     char second_string[] = "Cavalganti";
//     size_t bytes;
//     int bytes_count;
//     bytes = 3;
//     bytes_count = ft_memcmp(first_string, second_string, bytes);
//     printf("Bytes Count:%d\n", bytes_count);
//     return (0);
// }