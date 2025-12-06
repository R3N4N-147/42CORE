/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:13:00 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/29 20:13:08 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*new;
// 	int 	i;
// 	int 	j;

// 	new = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
// 	if(!new)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while(s1[i])
// 		new[j++] = s1[i++];
// 	i = 0;
// 	while(s2[i])
// 		new[j++] = s2[i++];
// 	new[j] = '\0';
// 	return (new);
// }

// int main(void)
// {
// 	char *s1 = "Re";
// 	char *s2 = "nan";
// 	char *result;

// 	printf("ft_strjoin: %s\n", result = ft_strjoin(s1, s2));
// 	printf("\n\n\n");
// 	printf("test");

// 	free(result);
// 	return (0);
// }

// REMEMBER: Go to Libft folder
// then
// cc src/ft_str/ft_strjoin00.c src/ft_str/ft_strlen.c 
// src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c 
// ./a.out