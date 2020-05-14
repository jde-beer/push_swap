/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:53:19 by jde-beer          #+#    #+#             */
/*   Updated: 2019/05/25 13:23:59 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int j;
	int p;

	j = 0;
	p = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[p] != '\0')
	{
		while (haystack[p + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + p);
		j = 0;
		p++;
	}
	return (0);
}

void	ft_free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
}
