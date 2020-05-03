/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 09:56:41 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/20 10:24:44 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	p;

	j = 0;
	p = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[p] != '\0' && p < len)
	{
		while (haystack[p + j] == needle[j] &&
				needle[j] != '\0' && (j + p) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + p);
		j = 0;
		p++;
	}
	return (0);
}
