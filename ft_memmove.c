/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:49:07 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 21:14:57 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory in a temporary array

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*temporary;
	size_t			i;
	
	if (!dst && !src)
	{
		return (NULL);
	}
	i = 0;
	temporary = ((unsigned char *)dst);
	while (n--)
	{
		temporary[i] = ((unsigned char *)src)[i];
		i++;
	}
	dst = ((void *)temporary);
	return (dst);
}

/*int main(void)
{
	char destination[4];
	char source[] = "Anacaval";
	size_t size;

	size = 10;		
	printf("Before:%s\n", destination);
	ft_memmove(destination, source, size); 
	printf("After:%s\n", destination);
	return (0);
}*/