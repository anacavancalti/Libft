/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 16:39:51 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/11/02 17:14:20 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// int main(void)
// {
// 	char string[] = "Anacaval";
// 	int fd;
// 
// 	fd = open("test.txt", O_RDWR);
// 	ft_putstr_fd(string, fd);
// 	return (0);
// }