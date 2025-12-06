/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 00:41:50 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:58:52 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstmap creates a new list by applying 
// a function 'f' to each node's content.
// Objective: Transform one list into a new list, managing memory carefully.
// t_list *: Returns a pointer to the head of the new list 
// (or NULL on failure).
// Parameters: lst (source list), f (transformation function), 
// del (cleanup function on error).

// #include "../../inc/libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*nlist_head;
// 	t_list	*new_node;
// 	void	*new_content;

//     // Check for NULL inputs for safety.
// 	if (!lst || !f || !del)
// 		return (NULL);

// 	nlist_head = NULL;

// 	while (lst)
// 	{
//         // 1. Transform content using 'f' and
//         // allocate memory for the new node.
// 		new_content = f(lst->content);
// 		new_node = (t_list *)malloc(sizeof(t_list));

//         // 2. Check for allocation failure of the new node.
// 		if (!new_node)
// 		{
// 			// If allocation fails, clean up the new content and
// 			// the entire new list created so far.
// 			del(new_content); // Free the content we just made
// 			ft_lstclear(&nlist_head, del); // Free the list we built
// 			return (NULL); // Return NULL as per requirements.
// 		}

//         // 3. Setup the new node and link it to the new list.
// 		new_node->content = new_content;
// 		new_node->next = NULL;
// 		ft_lstadd_back(&nlist_head, new_node);

//         // 4. Advance to the next node in the original list.
// 		lst = lst->next;
// 	}

//     // Return the head pointer of the fully constructed new list.
// 	return (nlist_head);
// }
