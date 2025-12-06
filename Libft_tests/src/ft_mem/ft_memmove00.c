/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:52:06 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 20:52:21 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memmove - copy memory area
// void *memmove(void *dst, const void *src, size_t len);

// #include <unistd.h> // 
// #include <stdio.h> // printf()
// #include <string.h> // memmove()

// int main(void)
// {
// 	int source[10] = {1,2,3,4,5,6,7,8,9,10};
// 	int destination[10];

// 	memmove(destination, source, sizeof(int) * 10); 
// 	// (1) about the size: check info at the bottom page.
// 	//
// 	// destination
// 	// when we use an array like this, 
// 	// as an argument where a pointer is expected
// 	// we say that the array decays to a pointer
// 	// What we are really passing here is not so much the array "destination"
// 	// is the memory address of the array "destination"
// 	// where the array destination is stored in memory
// 	// source, same thing
// 	//
// 	// lets check if that works
// 	for (size_t i = 0; i < 10; i++)
// 	{
// 		printf("destination[%zu] = %d.\n", i, destination[i]);
// 	}
// 	return (0);
// }

// If we know that memcpy.c
//
// (1) I enjoyed so much learning this part, let me share why.
// Look to the arrays. I had declare my arrays as int type
// The type int is typically 4 bytes 
//(32 bits = 00000000 00000000 00000000 00000000) (32 bit system)
// memmove( , , sizeof(int) * 10) -> basically this part is saying 
// hey system, reserve for me 4 bytes (int), 
// but not only one time, give-me 10. 
// Then I have 40 bytes reserved specifically for move my things.
// Is more or less this.