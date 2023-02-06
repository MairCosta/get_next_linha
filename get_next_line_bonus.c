/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:48:51 by mair              #+#    #+#             */
/*   Updated: 2023/02/06 21:09:28 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	int			i;
	char		*line;
	static char	buff[FOPEN_MAX][BUFFER_SIZE + 1];

	i = 0;
	if (fd < 0 || fd > FOPEN_MAX)
		return (NULL);
	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		while (buff[fd][i])
			buff[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buff[fd][0] || read(fd, buff[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff[fd]);
		if (ft_check(buff[fd]))
			break ;
	}
	return (line);
}
