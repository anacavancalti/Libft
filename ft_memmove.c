/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:49:07 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/25 14:24:03 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory in a temporary array

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
	{
		return (NULL);
	}
	if ((unsigned char *)dst < (unsigned char *)src)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		while (n--)
		{
			*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
		}
	}
	return (dst);
}

// int main(void)
// {
// 	char destination[10];
// 	char source[] = "Anacaval";
// 	size_t size;

// 	size = 4;		
// 	printf("Before:%s\n", destination);
// 	ft_memmove(destination, source, size); 
// 	printf("After:%s\n", destination);
// 	return (0);
// }