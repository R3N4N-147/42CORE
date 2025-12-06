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
// 	char arr1[] = "Brazil";
// 	char arr2[] = "Brazilia";
// 	size_t n = 5;
// 	printf("%d", ft_strncmp(arr1, arr2, n)); 
//	// equivalent to &arr1[0] and &arr2[0]

// 	return (0);
// }

// // 0, if the s1 and s2 are equal;
// // a negative value if s1 is less than s2;
// // a positive value if s1 is greater than s2.
