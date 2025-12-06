/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 00:41:50 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:47:12 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist_head;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	nlist_head = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&nlist_head, del);
			return (NULL);
		}
		new_node->content = new_content;
		new_node->next = NULL;
		ft_lstadd_back(&nlist_head, new_node);
		lst = lst->next;
	}
	return (nlist_head);
}
