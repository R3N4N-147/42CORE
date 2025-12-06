/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:29:47 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/26 11:29:48 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;
	size_t				i;

	temp1 = (const unsigned char *)s1;
	temp2 = (const unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (temp1[i] != temp2[i])
		{
			return ((temp1[i] - temp2[i]));
		}
		i++;
		n--;
	}
	return (0);
}
