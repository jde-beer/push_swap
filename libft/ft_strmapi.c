/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:12:37 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/06 15:20:18 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	p;
	char			*j;

	if (!s || !f)
		return (NULL);
	p = 0;
	if (!(j = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[p] && f)
	{
		j[p] = f(p, s[p]);
		p++;
	}
	j[p] = '\0';
	return (j);
}
