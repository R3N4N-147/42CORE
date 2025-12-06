/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:52:58 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/27 14:53:00 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../inc/libft.h"

// // allocate and free dynamic
// // contiguous allocation = calloc
// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*ptr;

// 	ptr = (void *)malloc(nmemb * size);
// 	// nmemb * size : amount of bytes to be reserve
// 	if (!ptr)
// 		return (NULL);
// 	// On error, these functions return NULL.
// 	ft_bzero(ptr, (nmemb * size));
// 	// set all to '\0', avoid trash
// 	return (ptr);
// 	// The malloc() and calloc() functions return a pointer to the allocated
// 	// memory,  which  is  suitably  aligned for any built-in type.
// }
// // NULL may also be returned by a successful
// // call  to  malloc() with a size of zero, or by a successful call to
// // calloc() with nmemb or size equal to zero.
// int main(void)
// {
// 	int *array;
// 	size_t num = 10; // 10 elements
// 	size_t size = sizeof(int); // size (int) = 4 bytes (0000 0000 0000 0000)
// 	int i;

// 	array = (int *)ft_calloc(num, size);
// 	// 10 * 4 = 40 bytes
// 	i = 0;
// 	// lets make an test
// 	while (num > i)
// 	{
// 		printf("array[%d]: %d.\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }
// // in the terminal
// // go to Libft/
// // cc src/ft_mem/ft_calloc.c src/ft_mem/ft_bzero.c