/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 09:46:54 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/15 08:31:51 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// #include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return (c);
}

/*int main(void)
{
    char a;
    char b;

    a = 'a';
    b = 'b';
    printf("Before:%c\n", a);
    b = ft_toupper(a);
    printf("After:%c\n", b);
    return(0);
}*/
