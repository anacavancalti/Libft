/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 09:10:06 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/30 10:58:50 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	if	 (!destination && !source)
	{
		return (0);
	}
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     char dst[] = "canti";
//     char src[] = "Anacaval";
//     size_t n;
// 
//     n = 4;
//     printf("Before:%s\n", dst);
//     ft_memcpy(dst, src, n);
//     printf("After:%s\n", dst);
//     return (0);
// }