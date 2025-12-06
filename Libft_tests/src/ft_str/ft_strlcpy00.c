/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:20:10 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/18 13:20:12 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *ft_strcpy(char *dst, char *src) // <- STR CPY
// {
//     while(*src)
//     {
//         // *(dst + i) = *src++;
//         //i++;
//         *dst++ = *src++;
//     }
//     *dst = '\0'; // add null char
//     return (dst);
// }

// int main(void)
// {
//     char src[] = "Sentence to test my stuff.";
//     char dst[20];

//     printf("src: %s\n",src);
//     printf("dst: %s\n",dst);
//     ft_strcpy(dst, src);
//     printf("Calling ft_strcpy.\n");
//     printf("src: %s\n",src);
//     printf("dst: %s\n",dst);

//     return (0);
// }