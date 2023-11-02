/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 17:19:59 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 16:42:36 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int main(void)
// {
// 	char a;
// 	char b;
//
// 	a = 'a';
// 	b = 'b';
// 	printf("Before:%c\n", a);
// 	b = ft_toupper(a);
// 	printf("After:%c\n", b);
// 	return (0);
// }