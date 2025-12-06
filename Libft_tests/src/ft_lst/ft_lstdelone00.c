/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:48:37 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 23:57:09 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definition: ft_lstdelone frees a single node and its content.
// Objective: Safely remove a specific node from 
// memory without affecting the rest of the list.
// void: The function does not return a value.
// t_list *lst: The specific node to be deleted.
// void (*del)(void *): A function pointer used to free the 
// 'content' inside the node.

// #include "../../inc/libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
//     // Check for NULL inputs for safety.
// 	if (!lst || !del)
// 		return;

//     // First, free the memory of the content stored inside the node, 
//     // using the user-provided 'del' function (which is likely just 'free').
// 	del(lst->content);

//     // Second, free the memory of the node structure itself.
// 	free(lst);

//     // Note: The 'next' pointer's memory is NOT touched,
//     // as per the requirements.
// }

// /* 
//  * Helper function used as the 'del' parameter for testing. 
//  * In real use, this would usually just be the standard 'free' function.
//  */
// void free_content_helper(void *content_ptr)
// {
//     printf("-> Freeing content: %s\n", (char *)content_ptr);
//     free(content_ptr);
// }

// int main(void)
// {
//     t_list *node_to_delete;

//     // 1. Create a node using ft_lstnew and strdup
//     node_to_delete = ft_lstnew(ft_strdup("This node must be deleted"));

//     printf("Node created. Content: %s\n", (char *)node_to_delete->content);

//     // 2. Call ft_lstdelone to free the node and its content
//     // We pass our helper function as the 'del' parameter
//     printf("Calling ft_lstdelone...\n");
//     ft_lstdelone(node_to_delete, &free_content_helper);

//     // 3. After this call, 'node_to_delete' is a dangling pointer
//     // (invalid memory address).
//     // You cannot safely access node_to_delete->content or
//     // node_to_delete->next after this point.
//     printf("Node has been deleted. Attempting to access its
//     memory now would cause a crash.\n");

//     return (0);
// }

// // cc src/ft_lst/ft_lstdelone.c src/ft_lst/ft_lstnew.c 
// // src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c  