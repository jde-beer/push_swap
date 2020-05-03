/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:08:12 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/11 16:20:53 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		j;
	const char	*str1;
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	j = 0;
	if (str1 == str2 || n == 0)
		return (0);
	while (str1[j] == str2[j] && j + 1 < n)
		j++;
	if (j == n)
		return (0);
	return ((unsigned char)str1[j] - (unsigned char)str2[j]);
}
