/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:02:45 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/02 17:14:42 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*duplicate;

	len = ft_strlen(s);
	i = 0;
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
	{
		return (duplicate);
	}
	while (i < len)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// int main(void)
// {
//     char s[] = "Ana Cavalcanti";
//     char *duplicate = ft_strdup(s);
//     if(duplicate == NULL)
//     {
//         printf("Memory allocation has failed.\n");
//         return (1);
//     }
//     printf("Original String:%s\n", s);
//     printf("Duplicate String:%s\n", duplicate);
//     free(duplicate);
//     return (0);
// }