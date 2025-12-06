/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:24:18 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/03 21:49:05 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	end;
// 	// verifing if my pointers are pointing to sth
// 	if (!s1 || !set)
// 		return (NULL);
// 	// trim the beggining
// 	// ft_strchr to iterate through s1
// 	// using the value of set (not the address)
// 	// and point s1 back after comparing 
// 	while (*s1 && ft_strchr(set, *s1))
// 		s1++;
// 	// preparing the second trim
// 	// starting from the end
// 	// to iterate backwards, lets find size of s1
// 	end = ft_strlen(s1);
// 	printf("Semi trimmed String: %s \n", s1);
// 	printf("%zu\n", end);
// 	while (*s1 && ft_strchr(set, s1[end]))
// 		end--;
// 	//
// 	// return (ft_substr(s1, 0, end + 1));
// 	// inside ft_substr my ft_calloc
// 	// already deals with +1 (null char)
// 	return (ft_substr(s1, 0, end + 1));
// }

// int main()
// {
// 	char *str1 = "xxxRenan Fonsecaxyz";
// 	// char *set = "x";
// 	char *set = "xyz";
// 	char *trim;

// 	trim = ft_strtrim(str1, set);
// 	printf("Trimmed String: %s", trim);
// 	free(trim);
// 	return (0);
// }
// // go to folder Libft
// // cc src/ft_str/ft_strtrim00.c src/ft_str/ft_strlen.c 
// // src/ft_str/ft_strchr.c src/ft_str/ft_substr.c 
// // src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c