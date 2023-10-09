/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaval <anacaval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:39:29 by anacaval          #+#    #+#             */
/*   Updated: 2023/10/08 13:04:20 by anacaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstrn(const char *big, const char *little, size_t len) // locate a substring in a string
{
size_t i;
size_t j;

if (*little == '\0')
    return ((char *) big); 

i = 0;
while (big[i] && i < len)
{
    j = 0;
    while (big[i + j] == little[j] && (i +j) < len)
    {
        if ((little[j + 1] == '\0'))
        return ((char *) &big[i]);
        j++;
    }
    i++;
}
return (NULL);
}