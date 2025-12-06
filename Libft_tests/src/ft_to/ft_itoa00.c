/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:56:08 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/04 00:08:50 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// itoa - integer to ascii
// #include "../../inc/libft.h"
// //
// // static int	ft_len(long int n)
// // both works
// static int	ft_len(long n)
// {
// 	int	len;
// 	len = 0;
// 	if (n == 0)
// 		return (1); // len == 1
// 	if (n < 0)
// 		len++; // slot[0] == signal
// 	while (n != 0)
// 	{
// 		// n /= 10
// 		n = n / 10;
// 		len++;
// 	}
// 	return (len);
// }
// //
// char	*ft_itoa(int n)
// {
// 	// turn a int into a str
// 	// a str needs a size
// 	// 1st: finding the length of the number
// 	// some extra tips
// 	// use long type to store more 
// 	// and deal with min and max
// 	// without over flow
// 	// oh yes, sth new, static ft
// 	// declaring static ft
// 	// your ft will work only here
// 	// without interfering in other programs
// 	char	*str;
// 	int		len;
// 	long	n_long;
// 	// why use long? -> overflow
// 	// to avoid overflow when turning 'max neg' into pos
// 	// int min -2147483648 (32 bits system)
// 	// int max 2147483647 (32 bits system)
// 	// overflow -(-2147483648)
// 	n_long = (long)n;
// 	len = ft_len(n_long);
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	// set a chunck of mem to my str
// 	// according his len + null
// 	if (!(str)) // check if error
// 		return (NULL);
// 	str[len] = '\0';
// 	if (n_long == 0)
// 		str[0] = '0'; // '0' = 48
// 	// handle with neg numbers
// 	if (n_long < 0)
// 	{
// 		str[0] = '-';
// 		n_long = n_long * -1;
// 	}
// 	//temp = n_long;
// 	//while (temp != 0)
// 	while (n_long != 0)
// 	{
// 		str[--len] = (n_long % 10) + '0';
// 		n_long = (n_long / 10);
// 	}
// 	return (str);
// }
// //
// int main (void)
// {
// 	// itoa - integer to ascii
// 	char *s1;
// 	char *s2;
// 	char *s3;
// 	char *s4;
// 	char *s5;
// 	s1 = ft_itoa(0);
// 	s2 = ft_itoa(12345);
// 	s3 = ft_itoa(-987);
// 	s4 = ft_itoa(-2147483648);
// 	// int min on a typical 32-bit system
// 	s5 = ft_itoa(2147483647);
// 	// int max on a typical 32-bit system
// 	printf("s1: 0:        %s\n", s1);
// 	printf("s2: 12345:    %s\n", s2);
// 	printf("s3: -987:    %s\n", s3);
// 	printf("s4: Int min: %s\n", s4);
// 	printf("s5: Int max:  %s\n", s5);
// 	free(s1);
// 	free(s2);
// 	free(s3);
// 	free(s4);
// 	free(s5);
// 	return (0);
// }