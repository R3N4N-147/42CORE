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
// 	const unsigned char	*ptr;
// 	unsigned char		chr;
// 	int 				i;

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

// int main(void)
// {
// 	char	*str = "Scanning the 1st n byte(s) of my string* seeking for c.";
//  // 56 + null
// 	char	*p;
// 	int 	i;

// 	i = 0;
// 	printf("string:      %s\n\n", str);

// 	p = ft_memchr(str, 'c', 5); // c = 99
// 	printf("string          p: %s\n", p); // ok
// 	printf("string p[p-str-1]: %c\n", p[p - str - 1]); // ok
// 	printf("string       p[i]: %c\n", p[i]); // ok
// 	printf("string         *p: %c\n", *p); // ok
// 	return (0);
// }