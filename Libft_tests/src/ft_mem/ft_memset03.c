/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:19:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/14 14:19:26 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset - fill memory with a constant byte
// DESCRIPTION: 
// The  memset()  function  fills the first n bytes of the memory area
// pointed to by s with the constant byte c.

// void *memset(void *s, int c, size_t n); // #include <string.h>

// https://www.youtube.com/watch?v=TGlePWhNgY0&t=244s 
// memset, memcpy, strcpy, memmove

// https://www.i-programmer.info/programming/cc/12124-fundamental
// -c-pointers-cast-a-type-punning.html?start=2

// #include <unistd.h>
// #include <stdio.h>
// #include "../../inc/libft.h"

// // void *ft_memset(void *dest, const int ch, size_t count) // visual guide
// void *ft_memset(void *s, const int c, size_t n)
// {
// 	int i;
// 	// we will use only positive, bits that means unsigned
// 	// Declare a pointer to receive the address from void *s
// 	unsigned char *p;
// 	// before pass the address, 
// 	// casting as an unsigned char type to my address
// 	p = (unsigned char *) s; // void *s == (unsigned char *) s
// 	i = 0;
// 	while(i < n)
// 	{
// 		p[i] = (unsigned char) c;
// 		// printf("i=%d. p[i]: %s.\n", i, &p[i]); // Incorrect
// 		printf("i=%d. p[i]: %c.\n", i, p[i]); // for testing only
// 		i++;
// 	}
// 	return (s);
// }

// int main(void)
// {

// 	size_t n = 10;
// 	char s[n]; // OR char *s;
// 	int c = 'a'; // 97 = char 'a'
// 	// ft_memset(s, c, n);
// 	// *s = ft_memset(s, c, n); // Incorrect
// 	ft_memset(s, c, n); // works
// 	// printf("%c", &s);
// 	printf("%s\n", s); // aaaaaaaaaa
// 	printf("%p\n", s); // address 0
// 	printf("%p\n", &s); // address 0
// 	printf("%c\n", s[0]);
// 	printf("%c\n", s[9]);
// 	// printf("\n");

// 	return (0);
// }