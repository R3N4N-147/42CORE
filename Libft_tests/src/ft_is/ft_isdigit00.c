/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:05:31 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/13 17:05:34 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	return (0);
}

// int main(void) 
// {
//     int d;

//     // d = 48; // 48 in ASCII is the char 0
//      d = 53; // 53 in ASCII is the char 5
//     // d = 'R'; // ASCII is == 82.

//     printf("%d", ft_isdigit(d));

//     return (0);
// }