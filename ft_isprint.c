/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 16:01:03 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:13:08 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
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
//     while (string[i] != '\0')
//     {
//         if (ft_isprint(string[i]) != 1)
//         {
//             printf("IsNotPrint:%d\n", 0);
//             return (0);
//         }
//         printf("String:%c\n", string[i]);
//         i++;
//     }
//     printf("IsPrint:%d\n", 1);
//     return (1);
// }
