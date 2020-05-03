/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:36:06 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/25 09:45:36 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_wordcount(char const *s, char c)
{
	int		j;
	int		p;

	j = 0;
	p = 0;
	while (s[j])
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		if (s[j] != c && s[j] != '\0')
			p++;
		while (s[j] != c && s[j] != '\0')
			j++;
	}
	return (p);
}

static	int		ft_wordlength(char const *s, char c)
{
	int		j;
	int		p;

	j = 0;
	p = 0;
	while (s[j])
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			p++;
		}
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**j;
	size_t	p;
	size_t	d;
	size_t	e;

	p = 0;
	d = 0;
	if (!s)
		return (NULL);
	if (!(j = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while ((int)p < ft_wordcount(s, c))
	{
		e = 0;
		if (!(j[p] = ft_strnew(ft_wordlength(&s[d], c) + 1)))
			j[p] = NULL;
		while (s[d] == c)
			d++;
		while (s[d] != c && s[d])
			j[p][e++] = s[d++];
		j[p][e] = '\0';
		p++;
	}
	j[p] = 0;
	return (j);
}
