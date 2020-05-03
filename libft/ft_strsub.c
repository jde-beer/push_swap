/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:05:41 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/11 16:14:39 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	p;

	if (s == NULL)
		return (NULL);
	if (!(j = ft_strnew(len)))
		return (NULL);
	p = 0;
	while (len > p && s[p + start] != '\0')
	{
		j[p] = s[start + p];
		p++;
	}
	j[p] = '\0';
	return (j);
}
