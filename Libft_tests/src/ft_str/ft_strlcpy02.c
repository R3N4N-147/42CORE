/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:20:10 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/18 13:20:12 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <string.h>
// #include "../../inc/libft.h"

// size_t ft_strlcpy(char *dst, char *src, size_t size)
// {
// 	size_t len;

// 	// len = ft_strlen(src);
// 	// I found other way
// 	len = 0;
// 	while(*(src + len) && --size) 
// 	// -- before, cuz I want the "last slot"
// 		*dst++ = *(src + len++);
// 	*dst = '\0'; 
// 	// add null char at the last slot
// 	while(*(src + len)) 
// 		len++; // finish to count len
// 	return (len);
// }

// int main(void)
// {
// 	char src[] = "Sentence to test my stuff."; // 26 letters + null
// 	char dst[20];
// 	size_t n;

// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);
// 	printf("n bytes to copy: %zu\n", n = 5); // n = bytes
// 	printf("Calling ft_strcpy.\n");
// 	n = ft_strlcpy(dst, src, n);
// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);
// 	printf("size of src: %zu\n", n);

// 	return (0);
// }