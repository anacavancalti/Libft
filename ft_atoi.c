/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacavalcanti <anacavalcanti@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/21 09:22:10 by anacavalcan   #+#    #+#                 */
/*   Updated: 2023/10/21 12:04:57 by anacavalcan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Wants to ignore ascii 9 to 13 
// * 10 to convert to interger then removes the extra '0' afterwards

#include "libft.h"

int	ft_atoi(const char *nptr)
{
    int number;
    int signal;

    number = 0;
    signal = 1;
    while ((*nptr >= '\t' && *nptr <= '\r') || (*nptr == ' '))
    {
        nptr++;
    }
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
        {
            signal = -1;
        }
        nptr++;
    }
    while (ft_isdigit(*nptr))
    {
        number = (number * 10) + (*nptr - '0');
        nptr++;
    }
    return (number * signal);
}

/*int main(void)
{
    char name[51] = "Anacaval";
    char number[51] = "12345";
    char negative[51] = "-12345";
    
    int converted_name = ft_atoi(name);
    printf("Name:%d\n", converted_name);
    int converted_number = ft_atoi(number);
    printf("Number:%d\n", converted_number);
    int converted_negative = ft_atoi(negative);
    printf("Negative:%d\n", converted_negative);
    return (0);
}*\