/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:29:48 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/07 14:20:45 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return (NULL);
	}
	if (!lst)
	{
		return (NULL);
	}
	new->next = *lst;
	*lst = new;
}
