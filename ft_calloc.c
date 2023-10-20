/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 11:18:57 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/20 08:18:20 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// #include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	i;

	i = 0;
	pointer = (malloc (count * size));
	if (pointer == NULL)
	{
		return (NULL);
	}
	while (i < (count * size))
	{
		(*(unsigned char *)(pointer + i)) = 0;
		i++;
	}
	return (pointer);
}

/*int main(void)
{
	unsigned int i;
	size_t count;
	size_t size; 
	
	i = 0;
	count = 3;
	size = sizeof(int);
	char *string = ft_calloc(count, size);
	while (i < count)
	{
		printf("Char:%c\n", string[i]);
		i++;
	}
	free(string);
	return (0);
}*/
