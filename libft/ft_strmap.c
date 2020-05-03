/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:10:01 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/06 15:11:53 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		p;
	char	*j;

	if (!s || !f)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	p = 0;
	while (s[p] && f)
	{
		j[p] = f(s[p]);
		p++;
	}
	j[p] = '\0';
	return (j);
}
