/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:31:14 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/24 11:31:17 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// // char *ft_strchr(const char *s, int c)
// // char *ft_strrchr(const char *s, int c)
// // the extra r means reverse

// char	*ft_strrchr(const char *s, int c)
// {
// 	char	*last;
// 	size_t	i;

// 	last = 0;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		// if(*s == c) // Either works equaly
// 		if (s[i] == (char)c) 
//		// I got this one, because of the cast
// 		{
// 			last = (char *)&s[i];
// 		}
// 		i++;
// 	}
// 	if (c == '\0') // work on this part
// 	{
// 		return ((char *)&s[i]);
// 	}
// 	return (last);
// }

// int main(void)
// {
// 	char *s = "bananane";
// 	char *p;
// 	int i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		printf("[%d] letter: %c address: %p\n", i, s[i], &s[i]);
// 		i++;
// 	}

// 	printf("\nCalling ft_strrchr();\n");

// 	p = ft_strrchr(s, 'a'); 
//	// the undestand 'a' as 97 (ascii)
// 	// printf("[%d] letter: %c address: %p\n", i, p[i], &p[i]); 
//	// ops, my mistake
// 	printf("slot[%ld], letter: %c, address: %p\n", (p - s), *p, p);

// 	return (0);
// }
