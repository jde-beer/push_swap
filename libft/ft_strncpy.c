/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:02:27 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/03 13:50:06 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t j;

	j = 0;
	while (src[j] != '\0' && (j < len))
	{
		dst[j] = src[j];
		j++;
	}
	while (j < len)
	{
		dst[j] = '\0';
		j++;
	}
	return (dst);
}
