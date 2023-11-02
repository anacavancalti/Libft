/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:12:58 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:12:30 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
// 	int i;
// 	char string[] = "Ana123caval";
//
// 	i = 0;
// 	while (string[i] != '\0')
// 	{
// 		if (ft_isalnum(string[i]) != 1)
// 		{
// 			printf("IsNotAlnum:%d\n", 0);
// 			return (0);
// 		}
// 		printf("String:%c\n", string[i]);
// 		i++;
// 	}
// 	printf("IsAlnum:%d\n", 1);
// 	return (1);
// }
