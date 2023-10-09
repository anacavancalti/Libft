/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaval <anacaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:30:49 by anacaval          #+#    #+#             */
/*   Updated: 2023/10/05 14:48:49 by anacaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
int i;

i = 0;
while (s[i] != '\0')
    {
        i++;
    }
while (s[i] > 0)
    {
        if (s[i] == c)
        return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}