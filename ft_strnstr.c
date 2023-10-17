/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:11:27 by anacaval      #+#    #+#                 */
/*   Updated: 2023/10/17 14:29:42 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len) 
{
char found;
size_t i;

i = 0;

}

int main(void)
{
    char haystack[] = "Cavalcanti";
    char needle[] = "val";
    size_t len;

    len = 4;
    char found = ft_strnstr(haystack, needle, len);
    printf("Found:%c\n", found);
    return (0);
}