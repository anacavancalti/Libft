/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:30:13 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/07 14:21:45 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// lst is the node of the list, in this case 

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
	{
		return ;
	}
	if (!del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}
