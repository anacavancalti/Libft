/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 17:58:36 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/15 08:31:51 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
// #include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*int main(void)
{
    const char s[] = "AnaCavalcanti";
    size_t len;

    len = ft_strlen(s);
    
    printf("%zu\n", len);
    return (0);
}*/
