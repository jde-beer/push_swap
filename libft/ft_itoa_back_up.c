/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_back_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:11:05 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/20 15:11:12 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_length(long n)
{
	long	j;
	int		p;

	j = n;
	p = 0;
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

static	char	*ft_min(char *s)
{
	char	*j;
	int		i;

	i = 0;
	if (!(j = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		j[i] = s[i];
		i++;
	}
	j[i] = '\0';
	return (j);
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
	if (n == -2147483648)
	{
		j = ft_min("-2147483648");
		return (j);
	}
	if (p == 0)
	{
		j[0] = 48;
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
