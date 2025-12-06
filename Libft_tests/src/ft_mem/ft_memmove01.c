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

// memmove — copy bytes
// void *memmove(void *dst, const void *src, size_t len);

// #include <stdio.h>
// #include <unistd.h>

// void *ft_memmove(void *dst, const void *src, size_t len)
// {
// 	int i;
// 	char *temporary;
// 	// OR char temporary[len]; // check if both works
// 	// temporary = (char *) src[i]; // wrong, dont use i
// 	temporary = (char *) src;// giving the address from src to temp
//
//
// 	// ATENTION ATENTION ATENTION 
// 	// I was making few tests, and finally notice that
// 	// I can't solve this using only one new temporary var ang
// 	// dereferencing (giving the address) from src to temp
// 	// and then passing from temp to dest
// 	// I have to have 2 temp vars
// 	// I gonna stop here, open a new v2 of this file
// 	// and keep building my solution there... :)
//
//
// 	i = 0;
// 	while(len) // when len == 0, the loop will broke
// 	{
// 		// temporary[i] = src[i];
// 		// (char *) dst[i] = temporary[i];
// 		// len--;
// 		// i++;
// 	}
// 	return (dst);
// }
//
// int main(void)
// {
// 	unsigned int len;
// 	const char source[35] = "This is a sentence with 35 letters.";
// 	// char *source = "This is a sentence with 35 letters."; // just testing
// 	char dest[len]; 
// 	// type array[parameter]: I choose len for a better use of the hardware, 
// 	// it is more flexible tan just fix it on a value.
//
// 	len = 35; // MODIFY. bytes to be copied.
// 	ft_memmove(source, dest, len);
// 	// printf("%c", &s);
// 	printf("%s\n", dest); // aaaaaaaaaa
// 	// printf("%p\n", dest); // address 0
// 	// printf("%p\n", &dest); // address 0
// 	// printf("%c\n", dest[0]);
// 	// printf("%c\n", dest[25]);
// 	// printf("\n");
// 	return (0);
// }