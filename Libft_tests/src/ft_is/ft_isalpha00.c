/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:10:05 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/11 11:10:05 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// page 7
// No global variables
// To begin, you must reimplement a set of functions from the libc
// check man
// The following function must be rewritten 
// without relying on external functions:
// isalpha
// The complete list of alphabetic characters is A–Z and a–z.

// #include <unistd.h>
// #include <stdio.h>
#include "../../inc/libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		return (1);
	}
	return (0);
}

// int	main(void)// some random chars from ASCII
// {
// 	int		i;
// 	char	c[] = "Renan 2025 $!*?.";

// 	i = 0;
// 	while(c[i] != '\0')
// 	{
// 		// first, some tests ...
// 		// printf(" %s", &c[i]); 
// 		printf(" %c", c[i]);
// 		// write(1, &c[i], 1);
// 		// write(1, "\n", 1);
// 		// printf(" %c\n", ft_isalpha(c[i]));
// 		printf(" %d\n", ft_isalpha(c[i]));
// 		// printf(" %c\n", ft_isalpha('R'));
// 		i++;
// 	}
// 	return (0);
// }
