/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:55:56 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 18:55:59 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include "../../inc/libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t len)
// {
// 	unsigned char		*temp1;
// 	const unsigned char	*temp2;

// 	temp1 = (unsigned char *) dst;
// 	temp2 = (const unsigned char *) src;
// 	if (len == 0 || (dst == src))
// 	{
// 		return (dst);
// 	}
// 	// first I did len == '\0', 
// 	// which will work but is wrong, 
// 	// len is unsigned intege type
// 	while (len)
// 	{
// 		*temp1++ = *temp2++;
// 		len--;
// 	}
// 	return (dst);
// }

// // int	main(void)
// // {
// // 	unsigned int	len;
// // 	const char		source[] = "This is a sentence with 35 letters.";
// // 	// char			dest[35]; OR
// // 	char			dest[sizeof(source)];
// // 	// char			dest[len]; 
// // 	// VLAs (Variable Length Arrays) are forbidden by 42 (norminette)
// // 	len = sizeof(source) / sizeof(char);
// // 	ft_memcpy(dest, source, len);
// // 	printf("dest[] After ft_memcpy: \"%s\"\n", dest);
// // 	return (0);
// // }
