/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:22:17 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 21:59:02 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function: write a single character 
// to a specific file descriptor.
// void: The function does not return a value.
// char c: The character to be written.
// int fd: The destination file descriptor.

// #include "../../inc/libft.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	// write(fd, buffer, count)
// 	// fd = Where to write (fd 1 for stdout, fd 2 for stderr, etc.)
// 	// &c = From where to read (the address of the character 'c')
// 	// 1  = How many bytes to write (just 1 byte, as it's a char)
// 	write(fd, &c, 1);
// }
// // Standard File Descriptors:
// // FD : Constant Name  : Description    : Where?
// // 0  : STDIN_FILENO   : Standard input : Keyboard
// // 1  : STDOUT_FILENO  : Standard output: Terminal (used by printf)
// // 2  : STDERR_FILENO  : Standard error : Terminal
// int main(void)
// {
// 	// Write 'H' to standard output (fd 1)
// 	ft_putchar_fd('H', 1);
// 	// Write 'i' to standard error output (fd 2)
// 	ft_putchar_fd('i', 2);
// 	// Write a newline character ('\n') to standard output
// 	ft_putchar_fd('\n', STDOUT_FILENO); 
// 	printf("This uses printf, which internally uses write(1, ...)\n");
// 	return (0);
// }