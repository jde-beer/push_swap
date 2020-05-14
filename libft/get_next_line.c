/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:30:23 by jde-beer          #+#    #+#             */
/*   Updated: 2019/07/22 15:11:44 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*juan(char *fd_array, char **line)
{
	char	*j;
	int		p;

	p = 0;
	while (fd_array[p] != '\n' && fd_array[p] != '\0')
		p++;
	*line = ft_strsub(fd_array, 0, p);
	if (fd_array[p] == '\0')
	{
		j = NULL;
		ft_strdel(&fd_array);
	}
	else
	{
		j = ft_strsub(fd_array, p + 1, ft_strlen(fd_array + p) + 1);
		ft_strdel(&fd_array);
	}
	return (j);
}

int				get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*fd_array[1024];
	int				jp;
	char			*debeer;

	if (!line || fd < 0 || (jp = read(fd, buff, 0) < 0))
		return (-1);
	if (!fd_array[fd])
		fd_array[fd] = ft_strnew(0);
	while (!ft_strchr(fd_array[fd], '\n') &&
			(jp = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[jp] = '\0';
		debeer = ft_strjoin(fd_array[fd], buff);
		ft_strdel(&fd_array[fd]);
		fd_array[fd] = ft_strdup(debeer);
		free(debeer);
	}
	if (BUFF_SIZE > jp && ft_strlen(fd_array[fd]) == 0)
	{
		ft_strdel(&fd_array[fd]);
		return (0);
	}
	fd_array[fd] = juan(fd_array[fd], line);
	return (1);
}
