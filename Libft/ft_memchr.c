/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:37:23 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 15:42:46 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;
	int					i;

	ptr = (const unsigned char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (n--)
	{
		if (ptr[i] == chr)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
