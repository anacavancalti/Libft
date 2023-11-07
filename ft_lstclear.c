/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:30:19 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/07 12:13:54 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and every successor 

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *given_node;
	
	if (!*lst)
	{
		return ;
	}
	if (!*del)
	{
		return ;
	}
	while (*lst)
	{
		given_node = *lst;
		*lst = given_node->next;
		ft_lstdelone(given_node, del);
	}
	*lst = NULL;
}
