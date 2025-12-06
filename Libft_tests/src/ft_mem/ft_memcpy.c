/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:56:04 by reda-fon          #+#    #+#             */
/*   Updated: 2025/11/15 18:56:12 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*temp1;
	const unsigned char	*temp2;

	temp1 = (unsigned char *) dst;
	temp2 = (const unsigned char *) src;
	if (len == 0 || (dst == src))
	{
		return (dst);
	}
	while (len)
	{
		*temp1++ = *temp2++;
		len--;
	}
	return (dst);
}
