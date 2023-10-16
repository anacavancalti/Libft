/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:13:24 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 09:08:13 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
// #include <stdio.h>

int ft_isalpha(int i)
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

/*int main(void)
{
	int i;

	char string[] = "AnaCaval";
	i = 0;
	while(string[i] != '\0')
	{
		if (ft_isalpha(string[i]) != 1)
		{
			printf("String:%c\n", string[i]);
			printf("Is not Alpha:%d\n", 0);
			return (0);
		}
		printf("String:%c\n", string[i]);
		i++;
	}
	printf("Is Alpha:%d\n", 1);
	return (1);
}*/