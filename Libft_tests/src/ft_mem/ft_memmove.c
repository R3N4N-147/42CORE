/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:53:21 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/18 13:18:00 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*temp1;
	const unsigned char	*temp2;

	temp1 = (unsigned char *) dst;
	temp2 = (const unsigned char *) src;
	if (n == 0 || (dst == src))
	{
		return (dst);
	}
	if (temp1 > temp2)
	{
		while (n > 0)
		{
			temp1[n - 1] = temp2[n - 1];
			n--;
		}
	}
	{
		while (n)
		{
			*temp1++ = *temp2++;
			n--;
		}
	}
	return (dst);
}
