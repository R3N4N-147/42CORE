/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:31:49 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/27 20:31:51 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// // returns a ptr to a new string which is a duplicate of the 1st str
// char	*ft_strdup(const char *str1)
// {
// 	char	*str2;
// 	size_t	i;

// 	// malloc -> set mem to str2 + null char
// 	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1));
// 	if (!str2)
// 		return (NULL);
// 	i = 0;
// 	while (str1[i])
// 	{
// 		str2[i] = str1[i];
// 		i++;
// 	}
// 	str2[i] = '\0';
// 	return (str2);
// }

// int main(void)
// {
// 	char *str1 = "Renan is a software eng :)";
// 	char *dup;

// 	printf("str1: %s\n", str1);
// 	dup = ft_strdup(str1);
// 	printf("dup:  %s\n", dup);
// 	free(dup);
// 	return (0);
// }