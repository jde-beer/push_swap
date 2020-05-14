/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:20:44 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/11 16:28:36 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_length(long n)
{
	long	j;
	int		p;

	j = n;
	p = 0;
	if (j == 0)
		return (1);
	if (j < 0)
	{
		j *= -1;
		p++;
	}
	while (j > 0)
	{
		j /= 10;
		p++;
	}
	return (p);
}

char			*ft_itoa(int n)
{
	char	*j;
	long	p;
	int		d;

	p = n;
	d = ft_length(p);
	if (!(j = (char *)malloc(sizeof(char) * (d + 1))))
		return (NULL);
	j[d--] = '\0';
	if (p == 0)
	{
		j[0] = '0';
		return (j);
	}
	if (p < 0)
	{
		j[0] = '-';
		p *= -1;
	}
	while (p > 0)
	{
		j[d--] = (p % 10) + 48;
		p /= 10;
	}
	return (j);
}
