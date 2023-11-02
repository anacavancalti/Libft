/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:13:47 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/28 15:00:25 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
	{
		return (len_src);
	}
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*destination;
// 	char	*source;
// 	size_t	lengh;
// 	size_t	totalsize;
// 
// 	destination = "Ana";
// 	source = "Cavalcanti";
// 	lengh = 4;
// 	totalsize = ft_strlcpy(destination, source, lengh);
// 	printf("Destination:%s\n", destination);
// 	printf("Total Size:%zu\n", totalsize);
// 	return (0);
// }
