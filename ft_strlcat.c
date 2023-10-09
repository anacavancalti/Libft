/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaval <anacaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:03 by anacaval          #+#    #+#             */
/*   Updated: 2023/10/08 18:55:37 by anacaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//-1 means that we need to save space for the null terminator 
//src is added to dst starting from the position after the end of the destination string
// null terminator is added to the dst string after the concatenation

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t total_len = dest_len + src_len;

    if (size <= dest_len)
    return (total_len);

    size_t remaining_space = size - dest_len - 1; 
    size_t i = 0;

    while (src[i] && i < remaining_space)
    {
        dst[dst_len + i] = src[i]; 
        i++;
    }
    dst[dst_len + i] = '\0'; 
    return (total_len);
}