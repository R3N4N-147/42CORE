/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:42:32 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/26 17:42:34 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	if (*little == '\0')
// 	{
// 		return ((char *)big);
// 	}
// 	i = ft_strlen(little);
// 	// while (*big && i <= len)
// 	while (*big && len >= i)
// 	{
// 		if (*big == *little && ft_memcmp(big, little, i) == 0)
// 		{
// 			return ((char *)big);
// 		}
// 		big++;
// 		len--;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
// 	const char	*largestring = "This is a big sentence.";
// 	const char	*smallstring = "big";
// 	char		*ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 25);
// 	printf("%p.\n", ptr);
// 	printf("%p, %c, \"%s\".\n", ptr, *ptr, ptr);

// 	return (0);
// }

// // REMEMBER, check if you are in the Libft folder
// // then, in the terminal
// // cc src/ft_str/ft_strnstr00.c src/ft_str/ft_strlen.c src/ft_mem/ft_memcmp.c