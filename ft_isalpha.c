/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 18:01:59 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/11/02 18:02:03 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
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
// 	char string[] = "Anacaval5";
//
// 	i = 0;
// 	while(string[i] != '\0')
// 	{
// 		if(ft_isalpha(string[i]) != 1)
// 		{
// 			printf("IsNotAlpha:%d\n", 0);
// 			return (0);
// 		}
// 		printf("String:%c\n", string[i]);
// 		i++;
// 	}
// 	printf("IsAlpha:%d\n", 1);
// 	return (1);
// }