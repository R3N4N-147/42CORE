/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 22:00:40 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:01:20 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstsize counts the number of nodes in a list.
// Objective: Traverse the list from beginning to end and return the count.
// int: Returns the length of the list (the number of nodes).
// t_list *lst: A pointer to the first node (the beginning of the list).

// #include "../../inc/libft.h"

// int	ft_lstsize(t_list *lst)
// {
// 	int	size;

// 	// Initialize the counter.
// 	size = 0;

// 	// Loop as long as the current node pointer is valid (not NULL).
// 	while (lst)
// 	{
// 		size++;       // Increment the counter for the current node.
// 		lst = lst->next; // Move the pointer to the next node in the sequence.
// 	}

// 	// Return the total count of nodes.
// 	return (size);
// }

// int main(void)
// {
// 	t_list *head = NULL; // Start with an empty list
// 	int size;

// 	printf("Building a list...\n");
// 	// head = NULL

// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 5")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 4")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 3")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 2")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 1")));

// 	size = ft_lstsize(head);
// 	printf("The size of the list is: %d\n", size); // Expected: n nbr of lists

// 	// Free memory
// 	t_list *current;
// 	t_list *next_node;

// 	current = head;
// 	while (current != NULL)
// 	{
// 		// Line 1: Save the address of the next node BEFORE 
// 		// freeing the current one.
// 		next_node = current->next; 
// 		// If we don't do this, we lose the address of the rest of the list.

// 		// Line 2: Free the content (the string) memory.
// 		free(current->content);    
// 		// This frees the memory allocated by strdup() in the main function.

// 		// Line 3: Free the node itself (the t_list box) memory.
// 		free(current);             
// 		// This frees the memory allocated by malloc() or ft_lstnew().

// 		// Line 4: Advance to the next node.
// 		current = next_node;       
// 		// Use the address we saved in Line 1 to continue the loop.
// 	}
// 	return (0);
// }

// // cc src/ft_lst/ft_lstsize01.c src/ft_lst/ft_lstnew.c 
// // src/ft_lst/ft_lstadd_front.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c