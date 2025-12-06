/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:53:31 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/06 00:34:27 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_word_fill_array(char **main_array, char const *s, char c)
{
	const char	*word_start;
	int			word_len;
	int			i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			word_len = s - word_start;
			main_array[i] = ft_substr(word_start, 0, word_len);
			if (!main_array[i])
			{
				ft_free(main_array);
				return (NULL);
			}
			i++;
		}
	}
	return (main_array);
}

char	**ft_split(char const *s, char c)
{
	char		**main_array;
	int			num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	main_array = malloc(sizeof(char *) * (num_words + 1));
	if (!main_array)
		return (NULL);
	main_array[num_words] = NULL;
	return (ft_word_fill_array(main_array, s, c));
}
