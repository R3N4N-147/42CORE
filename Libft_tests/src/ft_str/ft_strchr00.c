/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:20:04 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/23 15:20:10 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr, index — locate first occurrence of a character in a string

// #include "../../inc/libft.h"

// // * here, is because my ft return a pointer
// char *ft_strchr(const char *s, int c)
// {
// 	while(*s != '\0')
// 	{
// 		if(*s == (char)c)
// 		{
// 			return ((char *)s);
// 			// strchr precisa retornar onde a letra está → então retorna char *
// 		}
// 		s++;
// 	}
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	return (0);
// }
// // remember to return the same type

// int main(void)
// {
// 	char *p;
// 	char *s = "foobar";

// 	p = ft_strchr(s, 'o');
// 	printf("letter: %c address: %p\n", p[0], &p[0]);
// 	printf("letter: %c address: %p\n", p[1], &p[1]);
// 	printf("letter: %c address: %p\n", p[2], &p[2]);
// 	printf("letter: %c address: %p\n", p[3], &p[3]);
// 	printf("letter: %c address: %p\n", p[4], &p[4]);
// 	printf("letter: %c address: %p\n", p[5], &p[5]);
// 	printf("letter: %c address: %p\n", p[6], &p[6]);
// 	printf("letter: %c address: %p\n", p[7], &p[7]);
// 	printf("letter: %c address: %p\n", p[8], &p[8]);
// 	printf("letter: %c address: %p\n", p[9], &p[9]);
// 	printf("letter: %c address: %p\n", p[10], &p[10]);
// 	printf("letter: %c address: %p\n", p[11], &p[11]);
// 	// curiosity kill the cat, haha
// 	return (0);
// }
