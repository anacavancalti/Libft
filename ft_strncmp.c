/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 16:01:46 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/16 14:04:23 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// the int equals returns a sum of the difference considering ascii values 

#include <libft.h>
// #include <stdio.h>

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] == s2[i] && i <= n &&
            s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    printf("Comparison:%c\n%c\n%zu\n", s1[i], s2[i], i);
    return (s1[i] - s2[i]);
}

/*int main(void)
{
    char first_string[] = "Cavalcanti";
    char second_string[] = "Cavalganti";
    size_t n;

    n = 5;
    int equals = ft_strncmp(first_string, second_string, n);
    printf("Equals:%d\n", equals);
    return (0);
}*/