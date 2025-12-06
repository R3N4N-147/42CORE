/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:12:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 18:12:25 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include <unistd.h>
// #include <stdio.h>
// #include "../../inc/libft.h"

// void *ft_bzero01(void *s, size_t n)
// {
// 	unsigned char *p;
// 	size_t i;

// 	p = (unsigned char *) s;
// 	i = 0;
// 	while(i < n)
// 	{
// 		p[i] = '\0';
// 		i++;
// 	}
// 	return (s);
// }

// int main(void)
// {

// 	char s[] = "Renan 2025";
// 	size_t n = 10;

// 	printf("Print my string: %s.\n", s); // test
// 	printf("Call ft_bzero01().\n");
// 	ft_bzero01(s, n);
// 	printf("Print my string: %s.\n", s); // test
// 	return (0);
// }
