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

// size_t ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	unsigned int i;
// 	unsigned int len;

// 	len = ft_strlen(src);
// 	i = 0;
// 	if (size != 0)
// 	{
// 		// while(src[i] != '\0' && --size) WRONG
// 		while (src[i] != '\0' && (i < (size - 1)))
//      {
// 			dst[i] = src[i];
// 			i++;
//      }
// 	}
// 	dst[i] = '\0';
// 	return (len);
// }

// int main(void)
// {
// 	char src[] = "Sentence to test my stuff.";
// 	char dst[20];
// 	size_t n;
// 	// strcpy is not save, but lets test
// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);
// 	printf("n bytes to copy: %zu\n", n = 5); // n = bytes
// 	n = ft_strlcpy(dst, src, n); // for this case n = 26
// 	printf("src: %s\n",src);
// 	printf("dst: %s\n",dst);
// 	printf("size of src: %zu\n", n);

// 	return (0);
// }

// file 02 and 03 are working
// to properly run this programm, remember to:
// cc file_name.c support_function_name.c
// e.g.:
// cc ft_strcpy03.c ft_strlen.c
