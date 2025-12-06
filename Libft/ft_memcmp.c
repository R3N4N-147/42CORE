/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:29:47 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 15:42:48 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
