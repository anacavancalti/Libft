/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 17:51:27 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/28 18:04:57 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], 1);
			i++;
		}
		write (fd, "\n", 1);
	}
}

// int main(void)
// {
// 	char string[] = "Anacaval";
// 	int fd;
// 
// 	fd = open("test.txt", O_RDWR);
// 	ft_putendl_fd(string, fd);
// 	return (0);
// }