/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:12:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 18:12:25 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// void *ft_bzero00(void *s, const int c, size_t n)
// {
// 	int i;
// 	unsigned char *p;
// 	p = (unsigned char *) s;
// 	i = 0;
// 	while(i < n)
// 	{
// 		p[i] = (unsigned char) c;
// 		// printf("i=%d. p[i]: %c.\n", i, p[i]); // test
// 		i++;
// 	}
// 	return (s);
// }

// int main(void)
// {

// 	size_t n = 10;
// 	char s[] = "Renan 2025";
// 	int c = '\0'; // '\0' 
// 	// int c = 0; // 0
//     int i = 0;
// 	// printf("\nOriginal sentence: %s\n\n", s); // my sentence
//     while (i <= n)
//     {
//         printf("i=%d. Address: %p. p[i]: %c.\n", i, &s[i], s[i]); // test
//         i++;
//     }
// 	printf("\n");
// 	printf("Calling ft_bzero00().\n");
// 	ft_bzero00(s, c, n);
//     i = 0;
//     while(i <= n)
//     {
//         printf("i=%d. Address: %p. p[i]: %c.\n", i, &s[i], s[i]); // test
//         i++;
//     }
// 	printf("\n");
// 	return (0);
// }
