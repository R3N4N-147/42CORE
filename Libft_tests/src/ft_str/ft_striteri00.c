/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:30:39 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 20:19:33 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function definition: ft_striteri (string iteration with index)
// str: Operates on a string.
// iteri: Means to iterate (loop through) with the index (i).
// The goal is to modify the original string in-place using a custom function, 
// without allocating new memory.

// #include "../../inc/libft.h"

// // Helper ft to modify chars in place
// static void	my_ft(unsigned int index, char *char_ptr)
// {
// 	// (void)index; if 'index' is unused
// 	if (*char_ptr >= 'a' && *char_ptr <= 'z')
// 		*char_ptr = 'x'; // modify in the str original address
// }

// void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// // char (*f)(unsigned int, char *) is a pointer to a 
// // void function that takes the address of a char.
// {
// 	unsigned int	i;

// 	if (!s || !f)
// 		return; // Handle NULL inputs
// 	// like "", which actually has an address
// 	// and will make the while erronely works
//  // This check is for NULL pointers (address 0), not for empty strings (""), 
//  // which are valid addresses containing only a null terminator ('\0').
// 	i = 0;
// 	while (s[i])
// 	{
// 		(*f)(i, &s[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	//char *str;
// 	//str = "HeLLo My NaMe Is ReNaN.";
// 	// Remember: if you initialize a pointer to a literal string ("..."), 
//  // you can only read it (it's read-only memory).
//  // Use a char array (char str[] = "...") to ensure the string is modifiable.
// 	char str[] = "HeLLo My NaMe Is ReNaN."; 

// 	printf("%s\n", str);
// 	ft_striteri(str, &my_ft);
// 	printf("%s\n", str);
// 	return (0);
// }