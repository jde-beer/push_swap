/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:47:23 by jde-beer          #+#    #+#             */
/*   Updated: 2019/05/25 13:32:51 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	s1len;
	size_t	s2len;
	size_t	j;

	s1len = ft_strlen(s1);
	s2len = ft_strlen((char *)s2);
	j = 0;
	if (size <= s1len)
		return (size + s2len);
	while (s2[j] != '\0' && (s1len + j) < (size - 1))
	{
		s1[s1len + j] = s2[j];
		j++;
	}
	s1[s1len + j] = '\0';
	return (s1len + s2len);
}
