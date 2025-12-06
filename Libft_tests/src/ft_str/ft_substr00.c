/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:04:38 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/27 21:04:40 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	max_to_cpy, i;
// 	char	*substr;
// 	// check if string existe
// 	if (!s)
// 		return (NULL);
// 	// start is where it suppose starts copying the substring
// 	// check if start is bigger than str length
// 	// 'cuz in this case there is nothing to cpy
// 	if (start >= ft_strlen(s))
// 	{
// 		// return (NULL); WRONG
// 		return (ft_strdup(""));
// 		// len = 0;
// 	}
// 	// checking if I`m cpying more than I should
// 	max_to_cpy = ft_strlen(s) - start;
// 	if (len > max_to_cpy)
// 		len = max_to_cpy;
// 	// substr = malloc(len + 1); // + null char
// 	substr = ft_calloc(len + 1, sizeof(char));
// 	// I did like this
// 	// only because its a good idea setup my substr to 0
// 	if (!substr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[start + i];
// 		i++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

// int main (void)
// {
// 	char *str1 = "Hi Renan, you are very welcome.";
// 	char *str2;
// 	int	i;

// 	// ft return a pointer to substr
// 	// str2 = ft_substr(str1, 11, 7);
// 	str2 = ft_substr(str1, 10, 21);
// 	// printf("%s\n", str2);
// 	// free (str2);

// 	i = 0;
// 	while (str2[i] != '\0')
// 	{
// 		printf("%c", str2[i]);
// 		i++;
// 	}
// 	free (str2);
// 	printf("\n");
// 	return (0);
// }

// Remember:
// go to Libft folder
// cc src/ft_str/ft_substr00.c src/ft_str/ft_strlen.c 
// src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c

// cc -g src/ft_str/ft_substr00.c src/ft_str/ft_strlen.c 
// src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c
// valgrind --leak-check=full --show-leak-kinds=all ./a.out
