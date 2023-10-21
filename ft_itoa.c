/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/21 12:34:01 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/21 16:53:28 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Counts how many digits there are in a number lengh (nbr_size)
#include <stdio.h>
#include <stdlib.h>
// #include "libft.h"

/*
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
*/

static int nbr_size(long int len)
{
	int i;

	i = 0;
	if (len < 1) 
	{
		len = (len * -1); // Transforms lengh in a positive number
		i++;
	}
	while (len > 0)
	{
		len = (len / 10); // Removes the last digit of lengh
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*string;
	int			count;
	long int 	long_i;	
	
	long_i = n;
	count = nbr_size(long_i);
	string = ((char *)ft_calloc(sizeof(char), (count + 1)));
	if (!string)
	{
		return (NULL);
	}
	if (long_i < 0)
	{
		long_i = long_i * - 1;
	}
	if (long_i == 0)
	{
		string[long_i] = '0';
		return (string);
	}
	while (count--) // Starts from where the count has finished on nbr_size
	{
		string[count] = long_i % 10 + '0'; // Transforms the module into interger by adding 0
		long_i = long_i / 10;
	}
	if (string < 0)
	{
		string[0] = '-';
	}
	return (string);
}

/*
int main(void)
{
	int n;
	
	n = 7777;
	char *string = ft_itoa(n);
	printf("String:\"%s\"\n", string);
	return (0);
}
*/