/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back00.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:20:19 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 23:58:28 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstadd_back adds a node to the end (back) of the list.
// Objective: Find the last node and link the new node to it.
// void: The function does not return a value.
// t_list **lst: Address of the pointer to the first 
// node (handles empty list case).
// t_list *new: The new node to be added to the end.

// #include "../../inc/libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	// Call ft_lstlast to find the end of the current list.
// 	// If *lst is NULL (empty list), last will be NULL as well.
// 	last = ft_lstlast(*lst);

// 	// Check 1: Ensure the new node to be added is not NULL.
// 	if (!new)
// 		return ;

// 	// Check 2: If the list was empty (*lst is NULL).
// 	// The new node becomes the head of the list.
// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}

// 	// If the code reaches this point, the list is not empty,
// 	// and 'last' holds a valid address for the final node.
// 	// Link the old last node's 'next' pointer to the new node.
// 	last->next = new;
// }

// int main(void)
// {
// 	t_list *head = NULL;

// 	// Note: ft_lstlast, ft_lstnew, ft_strdup must be available for compilation.

// 	// Test with an empty list first (special case check)
// 	printf("Testing with an initially empty list:\n");
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 1")));
// 	// head = [ "Node 1" ] -> NULL

// 	// Test adding to the back of an existing list
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2")));
// 	// head = [ "Node 1" ] -> [ "Node 2" ] -> NULL

// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3 (Last)")));
// 	// head = [ "Node 1" ] -> [ "Node 2" ] -> [ "Node 3 (Last)" ] -> NULL

// 	printf("Final list content:\n");
// 	t_list *current = head;
// 	while (current != NULL) {
// 		printf("Content: %s\n", (char *)current->content);
// 		current = current->next;
// 	}

// 	// Free memory using the safe loop method
// 	t_list *next_node;
// 	current = head;
// 	while (current != NULL) {
// 		next_node = current->next;
// 		free(current->content);
// 		free(current);
// 		current = next_node;
// 	}

// 	return (0);
// }

// // cc src/ft_lst/ft_lstadd_back00.c src/ft_lst/ft_lstnew.c 
// // src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c src/ft_lst/ft_lstlast.c