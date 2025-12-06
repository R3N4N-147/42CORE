/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:42:13 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 15:09:15 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // definition: ft_lstnew is a node constructor.
// // Objective: Create a single new list node (element).
// // t_list * : Returns a pointer to the new node.
// // void * content : A generic pointer to the content 
// // to be stored in the node.

// #include "../../inc/libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*n_node;

// 	// Memory allocation for the t_list structure itself.
// 	n_node = (t_list *)malloc(sizeof(t_list));
// 	if (!(n_node))
// 		return (NULL);// Return NULL if allocation fails.
// 	// Atribui o conteudo fornecido ao campo content
// 	n_node->content = content;
// 	// Assign the provided content pointer 
// 	// to the node's content field.
// 	n_node->next = NULL;
// 	// Set the next pointer to NULL,
// 	// as it is an isolated new node initially.
// 	return (n_node);
// }

// int main(void)
// {
// 	char *data = "My first brand new node!"; // read-only
// 	t_list *node;

// 	// Creating the new node.
// 	// Using ft_strdup to allocate memory for 
// 	// the content separately.
// 	node = ft_lstnew(ft_strdup(data)); 
// 	if (node) {
// 		printf("Node created successfully!\n");
// 		printf("Content: %s\n", (char *)node->content);
// 		printf("Next points to: %p\n", (void *)node->next); // (nil)

// 		// Freeing the memory allocated for the 
// 		// content and for the node structure itself.
// 		free(node->content); 
// 		free(node);
// 	} else {
// 		printf("Failed to create the node.\n");
// 	}

// 	return (0);
// }
// // cc src/ft_lst/ft_lstnew00.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c 