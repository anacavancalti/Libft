/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 11:38:07 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/22 16:24:10 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// (count-- starts from where the count has finished on nbr_size)
// + '0' to transform the module in a whole number 
#include "libft.h"

static int	nbr_size(long int len)
{
	int	i;

	i = 0;
	if (len < 1)
	{
		len = (len * -1);
		i++;
	}
	while (len > 0)
	{
		len = (len / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*string;
	int			count;
	long int	long_i;

	long_i = n;
	count = nbr_size(long_i);
	string = ((char *)ft_calloc(sizeof(char), (count + 1)));
	if (!string)
		return (NULL);
	if (long_i < 0)
		long_i = long_i * -1;
	if (long_i == 0)
	{
		string[0] = '0';
		return (string);
	}
	while (count--)
	{
		string[count] = long_i % 10 + '0';
		long_i = long_i / 10;
	}
	if (n < 0)
		string[0] = '-';
	return (string);
}

// int main(void)
// {
// 	int n;

// 	n = 765;
// 	char *string = ft_itoa(n);
// 	printf("String:\"%s\"\n", string);
// 	return (0);
// }