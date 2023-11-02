/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:49:07 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:13:55 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*destination;
	const unsigned char		*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!destination && !source)
	{
		return (NULL);
	}
	if (destination < source)
	{
		ft_memcpy(destination, source, n);
	}
	else
	{
		while (n > 0)
		{
			n--;
			destination[n] = source[n];
		}
	}
	return (dst);
}

// int main(void)
// {
// 	char destination[10];
// 	char source[] = "Anacaval";
// 	size_t size;
// 
// 	size = 4;		
// 	printf("Before:%s\n", destination);
// 	ft_memmove(destination, source, size); 
// 	printf("After:%s\n", destination);
// 	return (0);
// }