/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 12:23:36 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/09 15:38:33 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// sets all the bytes in the memory block to 0
// two parameters: a pointer to the memory area, and the size of this area

#include <libft.h>

 void bzero(void *s, size_t n)
 {
    char *c;
    size_t i;

    c = s;
    i = 0;
    while (i < n)
    {
        c[i] = '\0';
        i++;
    }
 }