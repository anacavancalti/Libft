/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:02:45 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/25 12:21:27 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocation of memory for a new string, including the null terminator

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*duplicate;

	len = ft_strlen(s) + 1;
	i = 0;
	if (!s)
	{
		return (NULL);
	}
	duplicate = (char *)malloc((len) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
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