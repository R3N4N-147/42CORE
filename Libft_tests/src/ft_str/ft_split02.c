/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:53:31 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 16:01:20 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// static void	ft_free(char **arr)
// {
// 	int i;

// 	i = 0;
// 	while (arr[i])
// 	{
// 		// iterate and free each word
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr); // free main array
// }
// // #1 size of main array
// // we use static ft for local scope only,
// // to avoid possible conflicts whit other
// // ft in the global scope
// static int	ft_count_words(char const *s, char c)
// {
// 	int count;

// 	count = 0;
// 	while (*s)
// 	{
// 		// If the delimiter character is found, advance the pointer.
// 		if (*s == c)
// 			s++;
// 		// if find a non-delimiter char is found:
// 		// count++: increment the world count
// 		// go through the index until 
// 		// Iterate until the next
// 		// delimiter or the end of the string is found.
// 		else
// 		{
// 			count++;
// 			while (*s && *s != c)
// 				s++;
// 		}
// 	}
// 	return (count);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char		**main_array;
// 	int			num_words;
// 	int			i;
// 	const char	*word_start;
// 	int			word_len;

// 	if (!s)
// 		return (NULL);
// 	num_words = ft_count_words(s, c); // #1 
// 	// #2 Allocate memory for my main array.
// 	// The main array is an array of pointers (char **),
// 	// where I will store the addresses of the word strings (char *).
// 	main_array = malloc(sizeof(char *) * (num_words + 1));
// 	if (!main_array) // Check for allocation errors.
// 		return (NULL);
// 	main_array[num_words] = NULL; // add the NULL terminador

// 	i = 0;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			s++; // if Str[i] == delimiter character, advance the pointer.
// 		else
// 		{
// 			word_start = s; // beginning of the word
// 			while (*s && *s != c)
// 				s++; // adv the pointer until the end
// 			word_len = s - word_start; // length
// 			// This is where memory is allocated for each individual word.
// 			// The ft_substr function handles the '\0' termination.
// 			main_array[i] = ft_substr(word_start, 0, word_len);
// 			if (!main_array[i]) // Check if the substring allocation failed.
// 			{
// 				// #3 If an error occurred, 
//              //free all previously allocated memory.
// 				ft_free(main_array);
// 				return (NULL);
// 			}
// 			i++;
// 		}
// 	}
// 	return (main_array);
// }

// int main (void)
// {
// 	char	*s = "Hello world! This is 42.";
// 	int		c = ' '; // space (use char, not int)
// 	char	**split_res; // A pointer to point to my array of strings.
// 	int		i;

// 	printf("My original string: %s\n", s);
// 	split_res = ft_split(s, c);
// 	if (split_res == NULL)
// 	{
// 		printf("Error, NULL has been returned.");
// 	}
// 	i = 0;
// 	while (split_res[i] != NULL)
// 	{
// 		printf("String[%d]: %s\n", i, split_res[i]);
// 		free(split_res[i]);
// 		// I must free the memory for each word, 
// 		// because each word has its own chunk of memory 
// 		// allocated via ft_calloc (in ft_substr).
// 		i++;
// 	}
// 	free(split_res);
// 	// Free the memory allocated for the main_array 
// 	// (the array holding the pointers to each word).
// 	return (0);
// }

// // go to Libft
// // cc src/ft_str/ft_split02.c src/ft_str/ft_substr.c 
// // src/ft_mem/ft_calloc.c src/ft_str/ft_strlen.c src/ft_mem/ft_bzero.c