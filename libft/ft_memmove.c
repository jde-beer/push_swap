/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:35:17 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/05 11:56:34 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*j;
	const char	*p;
	size_t		jp;

	if (!dst && !src)
		return (NULL);
	j = (char *)dst;
	p = (const char *)src;
	if (j <= p)
	{
		jp = 0;
		while (jp++ < len)
			j[jp - 1] = p[jp - 1];
	}
	else
	{
		jp = len;
		while (jp > 0)
		{
			j[jp - 1] = p[jp - 1];
			jp--;
		}
	}
	return (j);
}
