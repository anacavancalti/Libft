/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:20:41 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 09:32:57 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
// #include <stdio.h>

int ft_isdigit (int i)
{
	if (i >= '0' && i <= '9')
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
	char string[] = "123";

	i = 0;
	while(string[i] != '\0')
	{
		if(ft_isdigit(string[i]) != 1)
		{
			printf("%c\n", string[i]);
			printf("IsNotDigit:%d\n", 0);
			return (0);
		}
		printf("%c\n", string[i]);
		i++;
	}
	printf("IsDigit:%d\n", 1);
	return (1);
}*/