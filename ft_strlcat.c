/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:13:27 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:11:23 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*source;
	size_t	dstsize;
	size_t	srcsize;
	size_t	totalsize;
	size_t	i;

	source = (char *)src;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	totalsize = srcsize + size;
	if (size > dstsize)
	{
		totalsize = srcsize + dstsize;
	}
	i = 0;
	while ((i + dstsize + 1) < size && src[i] != '\0')
	{
		dst[dstsize + i] = source[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (totalsize);
}

// int main(void)
// {
//     char destination[] = "Ana";
//     char source[] = "Cavalcanti";
//     size_t size;
// 
//     size = 5;
//     size_t totalsize = ft_strlcat(destination, source, size);
//     printf("Destination:%s\n", destination);
//     printf("Total Size:%zu\n", totalsize);
//     return (0);
// }