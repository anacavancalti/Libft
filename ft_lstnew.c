/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anacaval <anacaval@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:27:54 by anacaval      #+#    #+#                 */
/*   Updated: 2023/11/06 14:19:59 by anacaval      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// The sizeof a t-list is defined in the structure set on the header 

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
// 	t_list *list;
// 
// 	char string[] = "My starter pokemon is charmander";
// 	list = ft_lstnew(string);
// 	printf("%s\n", (char*)list->content);
// 	return (0);
// }