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
// #include <string.h>
// void *memmove(void *dest, const void *src, size_t n);

// #include <stdio.h>
// #include <unistd.h>

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	unsigned char		*temp1;
// 	const unsigned char	*temp2;

// 	temp1 = (unsigned char *) dst;
// 	temp2 = (const unsigned char *) src;
// 	if (n == 0 || (dst == src))
// 	{
// 		return (dst);
// 	}
// 	// if n = 0, nothing to be move
// 	// if dst == src your string is already there
// 	if (temp1 > temp2)
// 	{
// 		while(n)// n != 0 is true, means stay in the loop
// 		{
// 			*temp1-- = *temp2--;// go backwards
// 			n--;
// 		}
// 	}
// 	// if my *dst is bigger than my *src
// 	// they probably shouldn't overlap, 
// 	// is better start from the end and decrement both pointers
// 	// while n is true "move" my byte and decrement n
// 	else
// 	{
// 		while (n)
// 		{
// 			*temp1++ = *temp2++;
// 			n--;
// 		}
// 	}
// 	// the other case is just a normal memcopy
// 	return (dst);
// }

// int	main(void)
// {
// 	int	n;
// 	const char		src[] = "abcdefghij";
// 	char			dst[] = "xyz";

// 	n = 10;
// 	printf("src[]:  \"%s\"\n", src);
// 	printf("dest[]: \"%s\"\n", dst);
// 	ft_memmove(dst, src, n);
// 	printf("dest[]: \"%s\"\n", dst);
// 	return (0);
// }

// visualize could be quite difficult for understanding
// maybe this help:
// if memories overlap, that will happen not in memcpy
// could happen in the first case (temp1 > temp2)
// in this case, start from the end
// that will protect you from overlapping 

// mem  [0][1][2][3][4] <- just an example
// src  [R][E][N][A][N]
// dest [R][E][N][A][N] <- just coping
//
//
// mem  [0][1][2][3][4][5]
// src  [R][E][N][A][N][x]
// dest [x][R][E][N][A][N] bigger
// starting from the end 
// moving src[4] -> dst[5]
// moving src[3] -> dst[4] 
// going on this way I dont overlap
// before I have the chance to cpy
// do mentaly the oposity way with this example
// and will notice the overlaping
//
// mem  [0][1][2][3][4][5][6] 
// src  [x][x][R][E][N][A][N]
// dest [R][E][N][A][N][x][x]
// start from the beggining
// from 
// just cpy normally