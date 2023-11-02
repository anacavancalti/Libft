/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 11:18:57 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/30 22:18:28 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	i;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
	{
		return (NULL);
	}
	i = 0;
	pointer = (malloc (nmemb * size));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		(*(unsigned char *)(pointer + i)) = 0;
		i++;
	}
	return (pointer);
}

// int main(void)
// {
// 	unsigned int i;
// 	size_t nmemb;
// 	size_t size; 
// 
// 	i = 0;
// 	nmemb = 3;
// 	size = sizeof(int);
// 	char *string = ft_calloc(nmemb, size);
// 	while (i < nmemb)
// 	{
// 		printf("Char:%c\n", string[i]);
// 		i++;
// 	}
// 	free(string);
// 	return (0);
// }
