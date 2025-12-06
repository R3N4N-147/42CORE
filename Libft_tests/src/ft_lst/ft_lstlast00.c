/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 22:56:05 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 23:59:48 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstlast returns a pointer to the last node of the list.
// Objective: Traverse the list from beginning to end and return the final node.
// t_list *: Returns a pointer to the last node found 
// (or NULL if the list is empty).
// t_list *lst: A pointer to the first node (the beginning of the list).

// #include "../../inc/libft.h"

// t_list	*ft_lstlast(t_list *lst)
// {
// 	// If the list is empty (lst is NULL), return NULL immediately.
// 	if (!lst)
// 		return (NULL);

// 	// Loop as long as there is a valid 'next' node.
// 	// This stops the loop exactly when 'lst' is the last node.
// 	while (lst->next)
// 		lst = lst->next; // Advance the pointer to the next node.

// 	// When the loop finishes, 'lst' is the last node in the sequence.
// 	return (lst);
// }

// // I have a hard time to make a main to show this thing working
// // So, I will just believe in this piece of code :)