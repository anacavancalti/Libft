/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 12:23:36 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:12:13 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	i = 0;
	c = (char *)s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

//  int main(void)
//  {
//     char string[] = "Anacaval";
//     size_t space;

//     space = 1;
//     printf("Before:%s\n", string);
//     ft_bzero(string, space);
//     printf("After:%s\n", string);
//     return (0);
//  }