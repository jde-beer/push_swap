/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:48:00 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/03 14:15:09 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	j;

	j = 0;
	while (j < n)
	{
		((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
		if (((unsigned char *)src)[j] == (unsigned char)c)
			return (&((unsigned char *)dst)[j + 1]);
		j += 1;
	}
	return (NULL);
}
