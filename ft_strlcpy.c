/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:10:51 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 13:35:07 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// size - 1 considers the space ocupied by null terminator 

#include <libft.h>
// #include <stdio.h>


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srcsize = ft_strlen(src);
    size_t i;
    
    i = 0;
    while(i <= size - 1 && src[i] != '\0')
    {
       dst[i] = src[i];
       i++;
    }
    return (srcsize);
}

/*int main(void)
{
    char destination[] = "";
    const char source[] = "AnaCavalcanti";
    size_t space;

    space = 3;
    size_t totalsize;
    
    totalsize = ft_strlcpy(destination, source, space); 
    printf("Destination:%s\n", destination);  
    printf("Total Size:%zu\n", totalsize);
    return (0);
}*/