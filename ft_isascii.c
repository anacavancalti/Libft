/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:05:37 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 10:51:15 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
// #include <stdio.h>

int ft_isascii(int i)
{
    if (i >= 0 && i <= 255)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/*int main(void)
{
    int i;
    char string[] = "AnaCaval漢";

    i = 0;
    while(string[i] != '\0')
    {
        if (ft_isascii(string[i]) != 1)
        {
            printf("IsNotAscii:%c\n", string[i]);
            printf("%d\n", 0);
            return (0);
        }
        printf("String[i]:%c\n", string[i]);
        i++;
    }
    printf("IsAscii:%c\n", string[i]);
    printf("%d\n", 1);
    return (1);
}*/