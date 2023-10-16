/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:23:47 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 09:33:26 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>

int ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
	      	return (1);
	else 
		return (0);
}	

int main(void)
{
	int i;

	i = 0;
	char string[] = "Greece1";
	while(string[i] != '\0')
	{
		if (ft_isalnum(string[i]))
		i++;
	}
	printf("%d\n", i);
	return (0);
}