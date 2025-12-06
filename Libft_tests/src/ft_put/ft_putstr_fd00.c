/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:23:18 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 22:12:26 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// void	ft_putstr_fd(char *s, int fd)
// {
// 	// a simple NULL pointer check
// 	if (!s)
// 		return;
// 	// We loop through the string, 
// 	// writing one character at a time.
// 	while (*s != '\0')
// 	{
// 		write(fd, s, 1);
// 		s++;
// 	}
// 	// Alternatively, you could use a single write call:
// 	// write(fd, s, ft_strlen(s));
// }
// // Standard File Descriptors:
// // FD : Constant Name  : Description    : Where?
// // 0  : STDIN_FILENO   : Standard input : Keyboard
// // 1  : STDOUT_FILENO  : Standard output: Terminal (used by printf)
// // 2  : STDERR_FILENO  : Standard error : Terminal

// int	main(void)
// {
// 	char *message = "Hello, world!";

// 	// Write the message to standard output (fd 1)
// 	ft_putstr_fd(message, STDOUT_FILENO);
// 	ft_putchar_fd('\n', 1); // Add a newline after the message

// 	// Write an error message to standard error output (fd 2)
// 	ft_putstr_fd("An error occurred!", STDERR_FILENO);
// 	ft_putchar_fd('\n', 2); // Add a newline after the error message

// 	ft_putstr_fd("TEST! ERROR BLABLA!", STDERR_FILENO);
// 	ft_putchar_fd('\n', 2); // Add a newline after the error message

// 	printf("This uses printf, which internally uses write(1, ...)\n");
// 	return (0);
// }

// // cc ft_putstr_fd00.c ft_putchar_fd.c