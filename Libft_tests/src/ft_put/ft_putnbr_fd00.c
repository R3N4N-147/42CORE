/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:18:38 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 22:42:21 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
//     // Special case for INT_MIN (-2147483648) 
//     // to prevent overflow when negating it.
// 	if (n == -2147483648)
// 	{
// 		write(fd, "-2147483648", 11); 
//      // Use write() for the literal string directly
// 	}
//     // Handle negative numbers.
// 	else if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd); // Output the negative sign
// 		ft_putnbr_fd(-n, fd);   // Recursively call with the positive value
// 	}
//     // Handle numbers with more than one digit 
//     // (uses recursion to process digits from left to right).
// 	else if (n > 9)
// 	{
// 		ft_putnbr_fd(n / 10, fd); // Process the left digits first
// 		ft_putnbr_fd(n % 10, fd); // Then process the last digit
// 	}
//     // Base case: handle single digits (0 through 9).
// 	else
// 	{
// 		ft_putchar_fd(n + '0', fd); // Convert digit to ASCII char ('0' is 48)
// 	}
// }

// // Standard File Descriptors:
// // FD : Constant Name  : Description    : Where?
// // 0  : STDIN_FILENO   : Standard input : Keyboard
// // 1  : STDOUT_FILENO  : Standard output: Terminal (used by printf)
// // 2  : STDERR_FILENO  : Standard error : Terminal

// int main(void)
// {
// 	ft_putstr_fd("Number 42: ", STDOUT_FILENO);
// 	ft_putnbr_fd(42, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);

// 	ft_putstr_fd("Number -123: ", STDOUT_FILENO);
// 	ft_putnbr_fd(-123, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);

// 	ft_putstr_fd("Number 0: ", STDOUT_FILENO);
// 	ft_putnbr_fd(0, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);

// 	ft_putstr_fd("Number INT_MIN: ", STDOUT_FILENO);
// 	// ft_putnbr_fd(INT_MIN, STDOUT_FILENO); 
//  // I don't want add other lib
//     ft_putnbr_fd(-2147483648, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	return (0);
// }

// // cc ft_putnbr_fd00.c ft_putchar_fd.c ft_putstr_fd.c