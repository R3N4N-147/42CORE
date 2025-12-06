/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:37:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/24 19:37:25 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	const unsigned char *ptr;
// 	unsigned char 		chr;

// 	ptr = (const unsigned char*)	s;
// 	chr = (unsigned char)			c;
// 	while (n--)
// 	{
// 		if (*ptr == chr)
// 		{
// 			return ((void *)ptr);
// 		}
// 		ptr++;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
// 	char *str = "Scanning the 1st n byte(s) of my string* seeking for c.";
//  // 56 + null
// 	char *p;

// 	printf("string: %s\n", str);
// 	p = ft_memchr(str, 'c', 5); // c = 99
// 	printf("letter: %ld, %c\n", p - str, p[p - str - 1]);
// 	return (0);
// }