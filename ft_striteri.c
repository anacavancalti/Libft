/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 12:30:24 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/27 17:09:55 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s || !f)
	{
		return ;
	}
	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

void	any_function(unsigned int index, char *c)
{
	if (index % 2 == 0)
	{
		*c = ft_toupper(*c);
	}
}

// int main(void)
// {
// 	char string[] = "Anacaval";
// 	ft_striteri(string, any_function);
// 	printf("%s\n", string);
// 	return (0);
// }