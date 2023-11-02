/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 15:41:42 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 15:33:55 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = ((unsigned char *)s);
	while (i < n)
	{
		pointer[i] = ((unsigned char)c);
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char memory_area[] = "Ana Cavalcanti";
//     unsigned char constant_byte_c;
//     size_t bytes;
// 
//     constant_byte_c = 'C';
//     bytes = 4;
//     printf("Before:%s\n", memory_area);
//     ft_memset(memory_area, constant_byte_c, bytes);
//     printf("After:%s\n", memory_area);
//     return (0);
// }