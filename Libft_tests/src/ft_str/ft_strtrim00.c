/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:24:18 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/03 21:51:02 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	end;
// 	// verifing if my pointers are pointing to sth
// 	if (!s1 || !set)
// 		return (NULL);
// 	// trim the beggining
// 	// ft_strchr to iterate through s1
// 	// using the value of set (not the address)
// 	// and point s1 back after comparing 
// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	// before move on
// 	// I want to check to where set is point to
// 	printf("Inside ft_strtrim\n");
// 	printf("After 1st loop while\n");
// 	printf("set is pointing to: %s\n", set);
// 	// preparing the second trim
// 	// starting from the end
// 	// to iterate backwards, lets find size of s1
// 	// end = ft_strlen(&s1[start]); ???
// 	// both work, but the second make more sense
// 	end = ft_strlen(s1); // 19
// 	printf("Semi trimmed String: %s \n", &s1[start]);
// 	printf("str1 len %zu\n", end);
// 	while (end > start && ft_strchr(set, s1[end - 1]))
// 	{
// 		end--;
// 		// printf("end: %zu??\n", end);
// 	}
// 	printf("start: %zu\n", start);
//	//
// 	// return (ft_substr(s1, 0, end + 1));
// 	// inside ft_substr my ft_calloc
// 	// already deals with +1 (null char)
// 	printf("str1 end: %zu??\n", end);
// 	return (ft_substr(s1, start, (end-start)));
// }

// int main()
// {
// 	char *str1 = "xxxRenan Fonsecaxyz"; // 19 + null
// 	// char *set = "x";
// 	char *set = "xyz"; // 3 + null
// 	char *trim;

// 	trim = ft_strtrim(str1, set);
// 	printf("String: %s", trim);
// 	free(trim);
// 	return (0);
// }
// // go to folder Libft
// // cc src/ft_str/ft_strtrim00.c src/ft_str/ft_strlen.c 
// // src/ft_str/ft_strchr.c src/ft_str/ft_substr.c 
// // src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c