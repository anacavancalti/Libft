/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:30:08 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/07 14:21:15 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (!lst)
	{
		lst = new;
	}
	if (!new)
	{
		return (NULL);
	}
	tail = ft_lstlast(lst);
	tail->next = new;
}
