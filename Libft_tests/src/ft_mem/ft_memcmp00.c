/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:29:47 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/26 11:29:48 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// // memcmp — compare byte string
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	const unsigned char *temp1;
// 	const unsigned char *temp2;
// 	size_t i;

// 	temp1 = (const unsigned char *)s1;
// 	temp2 = (const unsigned char *)s2;
// 	i = 0;
// 	while (n)
// 	{
// 		if (temp1[i] != temp2[i])
// 		{
// 			return ((temp1[i] - temp2[i]));
// 		}
// 		i++;
// 		n--;
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	const char *str1 = "It is a sunny day.";
// 	const char *str2 = "It is a sunny Monday.";
// 	const char *str3 = "It is a sunny Wednesday.";

// 	printf("[13] str1[i] == str2[i]. %d.\n", ft_memcmp(str1, str2, 13));
// 	printf("[15] str1[i]  > str2[i]. %d.\n", ft_memcmp(str1, str2, 15));
// 	printf("[24] str2[i]  < str3[i]. %d.\n", ft_memcmp(str2, str3, 24));
// 	return (0);
// }
