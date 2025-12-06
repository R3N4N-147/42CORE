/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:57:41 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 22:13:38 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // Function: Outputs the string 's' to the specified 
// // file descriptor followed by a newline character (\n).
// // void: The function does not return a value.
// // char *s: The string to be written.
// // int fd: The destination file descriptor.

// #include "../../inc/libft.h"

// void	ft_putendl_fd(char *s, int fd)
// {
// 	// Check for a NULL pointer input to prevent crashes (Segmentation Fault).
// 	if (!s)
// 		return;
// 	// First, write the entire string 's' 
//	// to the file descriptor using your ft_putstr_fd.
// 	ft_putstr_fd(s, fd);
// 	// Second, write a single newline character 
//	// ('\n') to the same file descriptor.
// 	ft_putchar_fd('\n', fd);

// 	// Alternatively
// 	// write(fd, s, ft_strlen(s));
// 	// write(fd, "\n", 1);
// }

// // Standard File Descriptors:
// // FD : Constant Name  : Description    : Where?
// // 0  : STDIN_FILENO   : Standard input : Keyboard
// // 1  : STDOUT_FILENO  : Standard output: Terminal (used by printf)
// // 2  : STDERR_FILENO  : Standard error : Terminal

// int main(void)
// {
// 	char *str1 = "First  String.";
// 	char *str2 = "Second String.";

// 	ft_putendl_fd(str1, 1);
// 	ft_putendl_fd(str2, 1);
// 	return (0);
// }

// // cc ft_putendl_fd00.c ft_putchar_fd.c ft_putstr_fd.c