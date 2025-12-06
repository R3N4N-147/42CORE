/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:28:53 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 19:27:28 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function definition: ft_strmapi (string map application)
// str: Operates on a string.
// m: Comes from "map". Mapping is the concept of taking a list of items 
//    and applying a function to each item individually to create a new 
//    list of results.
// api: Stands for application programming interface 
// (used as a naming standard).
// The goal is to create a function that changes the original string by mapping 
// a custom function over it, and returns the new, modified string.

// #include "../../inc/libft.h"
// // Helper ft to transform chars
// static char my_ft(unsigned int index, char character)
// {
// 	if (character >= 'a' && character <= 'z')
// 		return character - 32; // Toupper
// 	if (character >= '0' && character <= '9')
// 		return character + 1; // Add 1 to a number
// 	return character; // return as they are
// }

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// // char (*f)(unsigned int, char) is a pointer to a ft
// {
// 	char	*str;
// 	size_t	i;

// 	// create a cpy from the original str
// 	str = ft_strdup(s);
// 	// handle any alloc error
// 	if (!(str))
// 		return (NULL);
// 	// iterate and transform each char 
// 	// according to the provided ft 'f'
// 	i = 0;
// 	while (str[i])
// 	{
// 		// Apply function 'f' to the character at index 'i'.
// 		str[i] = (*f)(i, str[i]);
// 		i++;
// 	}
// 	return (str);
// }

// int main(void)
// {
// 	char *str;
// 	char *str1;
// 	char *str2;
// 	str = ft_strmapi("abc123!\n", my_ft);
// 	str1 = ft_strmapi("Ren123!\n", my_ft);
// 	str2 = ft_strmapi("$210 HELLO$\n", my_ft);
// 	printf("%s", str);
// 	printf("%s", str1);
// 	printf("%s", str2);
// 	free(str);
// 	free(str1);
// 	free(str2);
// 	return (0);
// }

// cc src/ft_str/ft_strmapi00.c src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c 