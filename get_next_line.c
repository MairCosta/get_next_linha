/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:38:42 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/04 20:21:59 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			i;
	char		*line;
	static char	buf[BUFFER_SIZE + 1];

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (buf[i])
			buf[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buf[0] || read(fd, buf, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buf);
		if (ft_check(buf))
			break ;
	}
	return (line);
}

/*int	main(void)
{
	int		fd;
	char	*line;

	fd = open("mair.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
}*/