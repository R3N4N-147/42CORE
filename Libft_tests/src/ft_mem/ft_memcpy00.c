/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:55:56 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 18:55:59 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// void *ft_memcpy(void *dst, const void *src, size_t len)
// {
// 	int i;
// 	unsigned char		*temp1; // declaring my temp vars // unsigned
// 	const unsigned char *temp2;
// 	// temp1 = (char *) dst; WRONG
// 	// temp2 = (char *) src; WRONG
// 	// cast to unsigned char* so we can copy byte by byte safely
// 	temp1 = (unsigned char *) dst;// giving the address from src to temp
// 	temp2 = (const unsigned char *) src;// giving the address from dest to temp
// 	// temp1 and temp2 now point to the same memory addresses as dst and src 
// 	// where the values are stored
// 	i = 0;
// 	while (len) // loop runs len times; stops when len reaches 0 (false)
// 	{
// 		temp1[i] = temp2[i];
// 		// *temp1++ = *temp2++; 
// 		// just another way to do it, remember to test
// 		len--;
// 		printf("function: i=%d. dest[i]: %c\n", i, temp1[i]); 
//      // for testing only
// 		i++;
// 	}
// 	return (dst); // return the address (1st position)
// }
//
// int main(void)
// {
// 	unsigned int len;
// 	const char source[] = "This is a sentence with 35 letters."; 
//  // const: reason = function description
// 	printf("msg -> main: source[] before call my function: %s\n", source); 
// aaaaaaaaaa    
// 	printf("bytes: %lu\n", sizeof(source)); 
// 35*char + '\0 = 35*(1 byte)+'\0 = 35 bytes+'\0' = 36 bytes
// 	printf("len:   %d\n", len = sizeof(source)/sizeof(char)); 
//  // elements
// 	// char dest[sizeof(source)]; 
//  // I could have done that, these are just tests
// 	char dest[len];
//
// 	printf("msg -> main: dest[] before call my function: %s\n", dest); 
//  // aaaaaaaaaa
// 	// take care when doing sth like this
// 	// the reason is that dest is not initialized, 
//  // so undefined behavior could happen.
// 	// maybe null,trash or some random info will be printed out
//
// 	ft_memcpy(dest, source, len);
// 	// printf("%c", &s);
// 	printf("msg -> main: dest[] After call my function:  \"%s\"\n", dest); 
//  // aaaaaaaaaa
// 	// printf("address %p\n", dest); // address 0
// 	// printf("address %p\n", &dest); // address 0
// 	// printf("%c\n", dest[0]);
// 	// printf("%c\n", dest[25]);
// 	// printf("\n");
// 	return (0);
// }