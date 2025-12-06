/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:57:55 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/26 20:58:05 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/c/c-atoi-function/
// man atoi
// man strtol

// base-10 input

// #include "../../inc/libft.h"

// int	ft_atoi(const char *nptr)
// {
// 	int	sign;
// 	int	res;

// 	sign = 1;
// 	res = 0;
// 	// 1st: find a char (acording to ascii)
// 	// Initially ignoring any type of "space char", 
// 	// e.g.: space, \t, \n, \r, \f, \v
// 	while (*nptr == 32 || ((*nptr >= 9) && (*nptr <= 13)))
// 	{
// 		nptr++;
// 	}
// 	// is neg?
// 	if (*nptr == '-')
// 		sign *= -1;
// 	if (*nptr == '-' || *nptr == '+')
// 		nptr++;
// 	//
// 	while (*nptr >= '0' && *nptr <= '9')
// 	{
// 		res = res * 10 + *nptr - '0';
// 		nptr++;
// 	}
// 	return (res * sign);
// }

// int main (void)
// {
// 	// atoi, atol, atoll - convert a string to an integer
// 	// char	strToConvert[] = "Humans could live about 150 years.";
// 	char	strToConvert[] = "150 years.";
// 	int		ConvertedStr = ft_atoi(strToConvert);

// 	printf("String to be Converted: %s\n", strToConvert);
// 	printf("Converted to Integer: %d\n", ConvertedStr);
// 	printf("Converted to Integer: %d\n", ft_atoi(" 		\n     42."));
// 	printf("Converted to Integer: %d\n", ft_atoi("Calling 42."));
// 	printf("Converted to Integer: %d\n", ft_atoi("+5000"));
// 	printf("Converted to Integer: %d\n", ft_atoi("-4242"));
// 	printf("Converted to Integer: %d\n", ft_atoi("99999999"));
// 	printf("Converted to Integer: %d\n", ft_atoi("000000123456789"));
// 	printf("Converted to Integer: %d\n", ft_atoi("1234567890"));
// 	printf("Converted to Integer: %d\n", ft_atoi("12345678901"));
// 	return (0);
// }