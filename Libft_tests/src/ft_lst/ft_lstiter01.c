/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:23:30 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 01:14:17 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // node definition:
// // A place where things such as lines or systems join. 
// // A network is a series of points or nodes interconnected 
// // by communication paths.
// // //
// // This function is very similar to ft_striteri, 
// // but designed for linked lists.
// // //
// // ft_lstiter.c description:
// // Its main purpose is to traverse a linked list and apply 
// // a specific action to each item.
// // It acts like a tool to automate a task across the list.

// #include "../../inc/libft.h"

// // t_list *lst (The List):
// // This is the address of the first node of the list. 
// // The function uses this initial pointer to 
// // know where to start the iteration.
// // //
// // void (*f)(void *) (The Action):
// // This is a function pointer (like in ft_striteri and ft_strmapi). 
// // The user of ft_lstiter must provide a 
// // function with the signature void some_name(void *content).

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	// Check for NULL pointers in the list or the function pointer.
//     if (!lst || !f)
// 		return ;
//     // Iterate while the current node is valid (not NULL).
// 	while (lst)
// 	{
// 		// Apply the function 'f' to the content of the current node.
//         f(lst->content);
//         // Advance the pointer to the next node in the list.
// 		lst = lst->next;
// 	}
// }

// // Helper ft to be passed as the parameter 'f'.
// static void print_content(void *content_ptr)
// {
//     if (content_ptr)
//         printf("Content of the node: %s\n", (char *)content_ptr);
//     else
//         printf("Content of the node: (NULL)\n");
// }

// int main(void)
// {
//     // Manual creation of a test list.
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));

//     // Assigning test contents (strings) to the nodes.
//     node1->content = ft_strdup("Primeiro");
//     node2->content = ft_strdup("Segundo");

//     // Linking the nodes.
//     node1->next = node2;
//     node2->next = NULL; // MANDATORY: Terminate the list with NULL.

//     printf("Starting ft_lstiter:\n");

//     // Calling the function we are testing.
//     ft_lstiter(node1, &print_content);

//     // Freeing the memory allocated manually.
//     free(node1->content); free(node1);
//     free(node2->content); free(node2);

//     return (0);
// }

// // cc src/ft_lst/ft_lstiter01.c 
// // src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c