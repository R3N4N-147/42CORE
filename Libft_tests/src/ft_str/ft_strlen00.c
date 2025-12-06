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

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != 0)
		len++;
	return (len);
}

// int main(void)
// {
// 	int i;
// 	// char c[] = "Renan 2025.";
// 	char c[] = "Test.";

// 	i = 0;
// 	i = ft_strlen(&c[i]);
// 	printf("%d", i);

// 	return (0);
// }