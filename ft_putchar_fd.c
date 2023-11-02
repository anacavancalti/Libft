/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 17:31:43 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/28 17:41:11 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main(void)
// {
// 	char c;
// 	int fd;

// 	c = 'A';
// 	fd = open("test.txt", O_RDWR);
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }