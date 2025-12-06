/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:37:47 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/14 09:37:53 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isascii() function tests for an ASCII character, 
// which is any character in the range from 0 to 0177, inclusive.

// 0 to 0177 (Octadecimal)
// 0 to 127 (decimal)
// 0 to 7F (Hexadecimal)

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int y)
{
	if (y >= 0 && y <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//     int x;

//     x = 0;
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 25; // EM
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 48; // 0
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 56; // 8
//     printf("%d %d\n", x, ft_isascii(x));
//     x = -2; // not is ascii
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 80; // P
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 94; // ^
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 'k'; // dec: 107 (k)
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 126; // ~
//     printf("%d %d\n", x, ft_isascii(x));
//     x = 150; // not is ascii
//     printf("%d %d\n", x, ft_isascii(x));

//     return (0);
// }