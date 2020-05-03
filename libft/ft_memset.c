/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:32:27 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/11 16:18:14 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *j;

	j = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		*j = (unsigned char)c;
		j++;
		len--;
	}
	return (b);
}
