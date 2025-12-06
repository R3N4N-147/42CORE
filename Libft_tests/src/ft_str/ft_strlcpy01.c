/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:20:10 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/18 13:20:12 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char *ft_strncpy(char *dst, char *src, size_t n) // <- STR N CPY
// {
// 	while(*src && n)
// 	{
// 		*dst++ = *src++;
// 		n--;
// 	}
// 	*dst = '\0'; // add null char
// 	return (dst);
// }

// int main(void)
// {
// 	char src[] = "Sentence to test my stuff.";
// 	char dst[20];
// 	int n;
// 	// strcpy is not save, but lets test
// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);
// 	printf("n bytes to copy: %d\n", n = 12); // n = bytes
// 	ft_strncpy(dst, src, n);
// 	printf("Calling ft_strcpy.\n");
// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);

// 	return (0);
// }