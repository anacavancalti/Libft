/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:11:58 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 16:42:16 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

// int main(void)
// {
// 	char a;
// 	char b;
//
// 	a = 'A';
// 	b = 'B';
// 	printf("Before:%c\n", a);
// 	b = ft_tolower(a);
// 	printf("After:%c\n", b);
// 	return (0);
// }