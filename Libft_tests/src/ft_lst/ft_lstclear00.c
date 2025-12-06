/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 00:06:26 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:37:58 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstclear deletes and frees an entire list starting from 'lst'.
// Objective: Free all nodes and their content sequentially, 
// then set the head pointer to NULL.
// void: The function does not return a value.
// t_list **lst: The address of the pointer to the first node 
// (allows setting the head to NULL).
// void (*del)(void *): A function pointer used to free the 'content' 
// inside each node.

// #include "../../inc/libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*next_node;

// 	// Check for NULL inputs for safety.
// 	if (!lst || !del)
// 		return;

// 	// Iterate while the list head is not NULL.
// 	while (*lst)
// 	{
// 		// 1. Save the pointer to the next
// 		// node before we delete the current one.
// 		next_node = (*lst)->next;

// 		// 2. Delete the current node using the ft_lstdelone function.
// 		ft_lstdelone(*lst, del);

// 		// 3. Move the head pointer to the next node,
// 		// effectively shortening the list by one node.
// 		*lst = next_node;
// 	}
// 	// The head pointer is now NULL, as the list is empty.
// }

// /* 
//  * Helper function used as the 'del' parameter for testing. 
//  * This function handles freeing the content pointer.
//  */
// void free_content_helper(void *content_ptr)
// {
//     printf("-> Freeing content: %s\n", (char *)content_ptr);
//     free(content_ptr);
// }

// int main(void)
// {
//     t_list *head = NULL; // The main head pointer we will pass by address

// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 3")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 2")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 1")));

//     printf("List created (size %d). Calling ft_lstclear(&head,
//     &free_content_helper)...\n", ft_lstsize(head));

//     // Call ft_lstclear. We pass the ADDRESS of 'head'.
//     ft_lstclear(&head, &free_content_helper);

//     printf("List cleared. The head pointer should
//     now be NULL: %p\n", (void *)head);
//     // Expected output for head: (nil)

//     return (0);
// }

// remeber to go to the right folder
// cc src/ft_lst/ft_lstclear.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c 
// src/ft_lst/ft_lstnew.c src/ft_lst/ft_lstadd_front.c 
// src/ft_lst/ft_lstsize.c src/ft_lst/ft_lstdelone.c 
