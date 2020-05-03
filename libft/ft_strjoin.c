/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:25:10 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/10 11:24:17 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j;

	if (!s1 || !s2)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1 +
						ft_strlen(s2)))))
		return (NULL);
	ft_strcpy(j, s1);
	ft_strcat(j, s2);
	return (j);
}
