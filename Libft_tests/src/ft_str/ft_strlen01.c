/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:28:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/14 12:28:27 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	len;

// 	len = 0;
// 	// while (s[len] != '\0')
// 	while (s[len])
// 		len++;
// 	return (len);
// }

// // why I have changes here?
// // Unsigned Type: size_t is an unsigned data type therefore, 
// // it can only represent positive values or 0
// // Ability to represent size of all Objects

// int main(void)
// {
// 	int i;
// 	char c[] = "Renan 2025.";
// 	// char c[] = "Test.";

// 	i = 0;
// 	i = ft_strlen(&c[i]);
// 	printf("%d", i);

// 	return (0);
// }