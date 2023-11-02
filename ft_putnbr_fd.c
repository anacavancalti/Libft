/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 18:07:40 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/28 18:56:05 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write (fd, "-", 1);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	number %= 10;
	number += '0';
	write (fd, &number, 1);
}

// int main(void)
// {
// 	int number;
// 	int fd;
// 
// 	number = 2346;
// 	fd = open("test.txt", O_RDWR);
// 	ft_putnbr_fd(number, fd);
// 	return (0);
// }