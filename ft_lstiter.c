/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:30:24 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/07 14:22:55 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*given_node;

	given_node = lst;
	if (!lst)
	{
		return ;
	}
	if (!f)
	{
		return ;
	}
	while (given_node)
	{
		f(given_node->content);
		given_node = given_node->next;
	}
}
