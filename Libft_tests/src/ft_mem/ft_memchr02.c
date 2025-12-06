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
// 
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	const unsigned char	*ptr;
// 	unsigned char		chr;
// 	int 				i;
// 
// 	ptr = (const unsigned char*)	s;
// 	chr = (unsigned char)			c;
// 	i = 0;
// 	while (n--)
// 	{
// 		if (ptr[i] == chr)
// 		{
// 			return ((void*) &ptr[i]);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }
// 
// int main(void)
// {
// 	char	*str = "Scanning the 1st n byte(s) of my string* seeking for c.";
//  // 56 + null
// 	char	*p;
// 	int		n, i;
// 
// 	i = 0;
// 	printf("\nstring: %s\n\n", str);
//
// 	n = 5;
// 	p = ft_memchr(str, 'c', n); // c = 99
//	printf("scan bytes: %d, letter: %c, ", n, *p);
//	printf("str[%hhd], address found: %p.\n", p[p-str-1], &p[i]);
// 	return (0);
// }