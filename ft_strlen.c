/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 12:22:27 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/09 12:23:26 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlen(const char *s)
{
size_t length;

length = 0;
while (s[length] != '\0')
{
    length++;
}
return (length)
}