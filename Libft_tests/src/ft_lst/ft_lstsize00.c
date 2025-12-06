/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 22:00:40 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:04:36 by reda-fon         ###   ########.fr       */
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

//     // Initialize the counter.
// 	size = 0;

//     // Loop as long as the current node pointer is valid (not NULL).
// 	while (lst)
// 	{
// 		size++;       // Increment the counter for the current node.
// 		lst = lst->next; // Move the pointer to the next node in the sequence.
// 	}

//     // Return the total count of nodes.
// 	return (size);
// }

// int main(void)
// {
//     t_list *head = NULL; // Start with an empty list
//     int size;

//     printf("Building a list...\n");
//     // head = NULL

//     // Note: These functions must be compiled with this file.
//     // Assuming ft_lstadd_front and ft_lstnew are available.
//     // ft_lstadd_front(&head, ft_lstnew(strdup("Node 3")));
//     // ft_lstadd_front(&head, ft_lstnew(strdup("Node 2")));
//     // ft_lstadd_front(&head, ft_lstnew(strdup("Node 1")));

//     // Manual setup for this test file:
//     head = malloc(sizeof(t_list));
//     head->content = ft_strdup("Node 1");
//     head->next = NULL;

//     size = ft_lstsize(head);
//     printf("The size of the list is: %d\n", size);
//     // Expected: 1 (for manual setup)

//     // Test with an empty list
//     t_list *empty_list = NULL;
//     size = ft_lstsize(empty_list);
//     printf("The size of the empty list is: %d\n", size); // Expected: 0

//     // Free memory
//     free(head->content);
//     free(head);

//     return (0);
// }

// cc src/ft_lst/ft_lstsize00.c src/ft_lst/ft_lstnew.c 
// src/ft_lst/ft_lstadd_front.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c