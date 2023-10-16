/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:32:07 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/16 12:45:19 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <string.h>
//#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstsize = ft_strlen(dst);
    size_t srcsize = ft_strlen(src);
    size_t totalsize = dstsize + srcsize;
    size_t i;

    size_t remaining_space = size - dstsize - 1;
    i = 0;
    while (i <= remaining_space && src[i] != '\0')
    {
        dst[dstsize + i] = src[i];
        i++; 
    }
    return (totalsize);
}

/*int main (void)
{
    char dst[] = "Ana";
    const char src[] = "Cavalcanti";
    size_t size = 7;

    printf("Before: %s\n", dst);
    size_t totalsize = ft_strlcat(dst, src, size);
    printf("After: %s\n", dst);
    printf("Size: %zu\n", totalsize);
    return (0);
}*/
