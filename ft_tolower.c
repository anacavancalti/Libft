/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:16:20 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/15 08:31:51 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// #include <ctype.h>
// #include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}

/*int main(void)
{
    unsigned char a;
    unsigned char b;
    
    a = 'A';
    printf("Before:%c\n", a);
    b = ft_tolower(a);
    printf("After:%c\n", b);
    return (0);
}*/
