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
// 	unsigned int	i;
// 	unsigned int	r;
// 	unsigned int	srclen;
// 	unsigned int	dstlen;

// 	srclen = ft_strlen(src);
// 	dstlen = ft_strlen(dst);
// 	r = 0;
// 	if(size > dstlen)
// 	{
// 		r = (dstlen + srclen);
// 	}
// 	else
// 		r = srclen + size;
// 	i = 0;
// 	while (src[i] && dstlen <= --size)
// 	{
// 		dst[dstlen++] = src[i++];
// 	}
// 	dst[dstlen] = '\0';
// 	return (r);
// }

// int main()
// {
// 	char source[20] = ", world!";
// 	char destin[20] = "Hello";
// 	unsigned int result = ft_strlcat(destin, source, 20);
// 	printf("Destination:       %s\n", destin);
// 	printf("ft_strlcat Length: %d\n", result);
// 	return (0);
// }