/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaval <anacaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:10:51 by anacaval          #+#    #+#             */
/*   Updated: 2023/10/09 10:10:08 by anacaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (size == 0)
    return (ft_strlen(src));
    i = 0;
    while (src[i] && i < size - 1)
    {
        i++;
    }
    if dest[i] = '\0';
    return (ft_strlen(src));
}