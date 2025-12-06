/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:57:18 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/21 19:24:33 by reda-fon         ###   ########.fr       */
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
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	while (dst[i] && (i < size))
// 	{
// 		i++;
// 	}
// 	// len = ft_strlcpy(dst, src, size - 1); TAKE CARE HERE
// 	// after while dst know are point to '/0'
// 	// and then I'm sending him to strlcpy
// 	// size is not the original size
// 	len = ft_strlcpy(&dst[i], src, size - i);
// 	return (len + i);
// }

// int main()
// {
// 	char source[25] = ", world!";
// 	char destin[25] = "Hello";
// 	unsigned int result = ft_strlcat(destin, source, 25);
// 	printf("Destination:       %s\n", destin);
// 	printf("ft_strlcat Length: %d\n", result);
// 	return (0);
// }

// type in the terminal:
// cc file_name.c ft_file_name.c
// for instance:
// cc ft_strlcat05.c ft_strlcpy.c ft_strlen.c

// both 04 e 05 are good to go.