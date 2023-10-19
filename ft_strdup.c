/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:02:45 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/19 08:44:50 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Allocation of memory for the new string, including space for the null terminator
// Use duplicate = NULL for memory allocation failure

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

/*size_t  ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return (len);
}*/

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    size_t i;
    char *duplicate;

    i = 0; 
    duplicate = (char *)malloc((len + 1) * sizeof(char));
    if(duplicate == NULL)
    {
        return (NULL);
    }
    while(i < len)
    {
        duplicate[i] = s[i];
        i++;
    }
    return (duplicate);
}

/*int main(void)
{
    char s[] = "Ana Cavalcanti";
    char *duplicate = ft_strdup(s);
    if(duplicate == NULL)
    {
        printf("Memory allocation has failed.\n");
        return (1);
    }
    printf("Original String:%s\n", s);
    printf("Duplicate String:%s\n", duplicate);
    free(duplicate);
    return (0);
}*/