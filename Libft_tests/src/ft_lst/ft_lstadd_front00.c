/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front00.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:41 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:04:59 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstadd_front adds a node to the beginning of the list.
// Objective: Change the head of the list to a new node.
// void: The function does not return a value.
// t_list **lst: Address of the pointer to the first node 
// (allows modification of the head pointer).
// t_list *new: The new node to be added to the front.

// #include "../../inc/libft.h"

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
//     // Check for NULL pointers in the list pointer address or the new node.
// 	if (!lst || !new)
// 		return;
//     // The 'next' pointer of the new node should point to the 
//     // old head of the list (*lst).
// 	new->next = *lst; 

//     // Update the actual head pointer of the list to point to the new node.
// 	*lst = new;       
// }

// // Helper function to be passed as the parameter 'f' for ft_lstiter.
// void print_content(void *content_ptr)
// {
//     if (content_ptr)
//         printf("Content of the node: %s\n", (char *)content_ptr);
//     else
//         printf("Content of the node: (NULL)\n");
// }

// int main(void)
// {
//     t_list *head; // This pointer represents the start of our list
//     t_list *newNode1, *newNode2;
//     // 1. Create the first node of the original list.
//     head = ft_lstnew(ft_strdup("Original Head (Second Node)"));
//     // The list is now: [ "Original Head" ] -> NULL

//     printf("List before adding to the front:\n");
//     ft_lstiter(head, &print_content);

//     // 2. Create a new node to add to the front.
//     newNode1 = ft_lstnew(ft_strdup("New Front Node 1"));

//     // 3. Add the new node to the front.
//     ft_lstadd_front(&head, newNode1); // Pass the ADDRESS of 'head'
//     // The list is now: [ "New Front 1" ] -> [ "Original Head" ] -> NULL

//     printf("\nList after adding 'New Front Node 1':\n");
//     ft_lstiter(head, &print_content);

//     // 4. Add another node to the front.
//     newNode2 = ft_lstnew(ft_strdup("New Front Node 2"));
//     ft_lstadd_front(&head, newNode2);
//     // The list is now:
//     // [ "New Front 2" ] -> [ "New Front 1" ] -> [ "Original Head" ] -> NULL
//     printf("\nList after adding 'New Front Node 2':\n");
//     ft_lstiter(head, &print_content);

//     // Remember to free the memory (use ft_lstclear when you make it)
//     // Manually freeing for now:
//     free(head->content); free(head);
//     free(head->next->content); free(head->next);
//     free(head->next->next->content); free(head->next->next);

//     return (0);
// }

// // go to folder before src
// // then
// // cc src/ft_lst/ft_lstadd_front00.c src/ft_lst/ft_lstnew.c 
// // src/ft_lst/ft_lstiter.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c 