/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:12:40 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:11:50 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	signal;

	number = 0;
	signal = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || (*nptr == ' '))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			signal = -1;
		}
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		number = (number * 10) + (*nptr - '0');
		nptr++;
	}
	return (number * signal);
}

// int main(void)
// {
//     char name[51] = "Ana Cavalcanti";
//     char number[51] = "12345";
//     char negative[51] = "-12345";

//     int converted_name = ft_atoi(name);
//     printf("Name:%d\n", converted_name);
//     int converted_number = ft_atoi(number);
//     printf("Number:%d\n", converted_number);
//     int converted_negative = ft_atoi(negative);
//     printf("Negative:%d\n", converted_negative);
//     return (0);
// }