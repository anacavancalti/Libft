/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:05:37 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:12:43 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
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
//     int i;
//     char string[] = "Anacaval";
//
//     i = 0;
//     while(string[i] != '\0')
//     {
//         if (ft_isascii(string[i]) != 1)
//         {
//             printf("IsNotAscii:%d\n", 0);
//             return (0);
//         }
//         printf("String:%c\n", string[i]);
//         i++;
//     }
//     printf("IsAscii:%d\n", 1);
//     return (1);
// }