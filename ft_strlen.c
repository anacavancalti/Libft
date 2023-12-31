/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:13:58 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/24 15:36:08 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int main(void)
// {
//     char string[]= "AnaCaval";
//     size_t size;
// 
//     size = ft_strlen(string);
//     printf("Lengh:%zu\n", size);
//     return (0);
// }