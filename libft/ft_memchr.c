/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:16:51 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/13 11:45:41 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*j;
	size_t		p;

	p = 0;
	j = (const char *)s;
	while (p < n)
	{
		if (j[p] == (const char)c)
			return ((void *)j + p);
		p++;
	}
	return (0);
}
