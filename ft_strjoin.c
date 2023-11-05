/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 15:09:18 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/05 10:17:54 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_new_string;
	char	*new_string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_new_string = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_string = (char *)malloc(sizeof(char) * (len_new_string));
	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!new_string)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		new_string[i] = s1[i];
		i++;
	}
	while (j < (int)ft_strlen(s2))
	{
		new_string[i++] = s2[j++];
	}
	new_string[i] = '\0';
	return (new_string);
}

// int main(void)
// {
// 	char const first_string[] = "Ana ";
// 	char const second_string[] = "Cavalcanti";
// 	char *new_string = ft_strjoin(first_string, second_string);
// 	printf("New String:%s\n", new_string);
// 	return (0);
// }