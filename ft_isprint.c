/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 16:01:03 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 11:40:14 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
// #include <stdio.h>

int ft_isprint(int c)
{
    if (c >= ' ' && c <= '~')
        return (1);
    else
        return (0);
}

/*int main(void)
{
    int i;
    char string[] = "AnaCa漢al";

    i = 0;
    while (string[i] != '\0')
    {
    if (ft_isprint(string[i]) != 1)
        {
            printf("IsNotPrint:%d\n", 0);
            return (0);
        }
        printf("%c\n", string[i]);
        i++;
    }
    printf("IsPrint:%d\n", 1);
    return (1);
}*/