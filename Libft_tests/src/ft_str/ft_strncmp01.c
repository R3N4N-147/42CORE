/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:33:36 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/24 18:33:41 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	int i;
// 	i = 0;
// 	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
// 	{
// 		i++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 	// looking after possible negative numbers on extend ascii table
// }

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("abc", "abc", 2)); // 0
// 	printf("%d\n", ft_strncmp("abc", "abd", 3)); // -1
// 	printf("%d\n", ft_strncmp("abc", "ab", 3)); // 'c' - '\0' (c == 99 in asc)
// 	printf("%d\n", ft_strncmp("ab", "abc", 3)); // '\0' - 'c'
// 	printf("%d\n", ft_strncmp("abc", "abc", 0)); // 0

// 	return (0);
// }

// // 0, if the s1 and s2 are equal;
// // a negative value if s1 is less than s2;
// // a positive value if s1 is greater than s2.
