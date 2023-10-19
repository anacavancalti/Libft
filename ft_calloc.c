/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 19:52:40 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/19 20:50:49 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Contiguously allocates enough space for count objects that are size bytes of memory
// Returns a pointer to the allocated memory
// The allocated memory is filled with bytes of value zero

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *pointer;
    size_t i;

    i = 0;
    pointer = malloc (count * size);
    if (pointer == NULL)
    {
        return (NULL);
    }
    while (i < (count * size))
    {
       (*(unsigned char *) (pointer + i)) = 0;
       i++;
    }
    return (pointer);
}

/*int main(void)
{
    unsigned int i;
    size_t count;
    size_t size;

    i = 0;
    count = 3;
    size = sizeof(int);
    char *string = ft_calloc(count, size);
    while(i < count)
    {
        printf("Char:%c\n", string[i]);
        i++;
    }
    free(string);
    return (0);
}*/