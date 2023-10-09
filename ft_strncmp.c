/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaval <anacaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:01:46 by anacaval          #+#    #+#             */
/*   Updated: 2023/10/05 18:27:10 by anacaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libstd.h>

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (n > 0)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        if (s1[i] == '\0')
        {
            return (0);
        }
    i++;
    n--;
    }
    return (0);
}