/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:57:18 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/21 17:57:33 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlcpy() function copies up to size - 1 characters 
// from the NUL-terminated string src to dst, 
// NUL-terminating the result.

// RETURN VALUES
// The strlcpy() and strlcat() functions return the total 
// length of the string they tried to create.

// #include "../../inc/libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	srclen;
// 	size_t	dstlen;
// 	size_t	i;

// 	srclen = ft_strlen(src);
// 	dstlen = ft_strlen(dst);
// 	// REMEMBER: size is the TOTAL size of my buffer (buffer: dest[size])
// 	// 	if size <= dstlen that means I have no room for more
// 	if(size <= dstlen)
// 	{
// 		return (size + srclen);
// 	// return the total lenght of the string I was trying to create 
// 	}
// 	else
// 	i = 0;
// 	// I still have some room
// 	// size > dstlen
// 	i = 0;
// 	while (src[i] && dstlen + i < size - 1)
// 	{
// 		dst[dstlen + i] = src[i];
// 		i++;
// 	}
// 	dst[dstlen + i] = '\0';
// 	// 	if size > dstlen so I maybe have some room for more
// 	return (dstlen + srclen);
// }

// int main()
// {
// 	char source[50] = ", world! Meu nome eh Renan e eu sou invencivel.";
// 	char destin[20] = "Hello";
// 	unsigned int result = ft_strlcat(destin, source, 20);
// 	printf("Destination:       %s\n", destin);
// 	printf("ft_strlcat Length: %d\n", result);
// 	return (0);
// }