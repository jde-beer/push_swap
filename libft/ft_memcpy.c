/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:15:41 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/11 16:19:43 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int j;

	j = 0;
	if (src == dst)
		return (dst);
	while (j < n)
	{
		((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
		j += 1;
	}
	return (dst);
}
