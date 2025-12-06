/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd01.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:18:38 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 22:43:08 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	long nb;

// 	nb = n; // Cast the int to a long
//     // 1. Handle the sign.
// 	if (nb < 0)
// 	{
// 		ft_putchar_fd('-', fd); 
//      // Write the negative sign
// 		nb = -nb;               
//      // Safely negate (works even for INT_MIN because nb is long)
// 	}
//     // 2. Handle numbers larger than 9 using recursion.
//     // This processes digits from left to right.
// 	if (nb > 9)
// 	{
// 		ft_putnbr_fd(nb / 10, fd); // Recursively call for the left part
// 		ft_putnbr_fd(nb % 10, fd); // Call for the last digit
// 	}
//     // 3. Base case: handle single digits (0-9).
// 	else
// 	{
// 		ft_putchar_fd(nb + '0', fd); // Convert digit to ASCII char and write it
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
// 	// ft_putnbr_fd(INT_MIN, STDOUT_FILENO); // I don't want add other lib
//     ft_putnbr_fd(-2147483648, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	return (0);
// }

// // cc ft_putnbr_fd01.c ft_putchar_fd.c ft_putstr_fd.c