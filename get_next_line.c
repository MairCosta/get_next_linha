/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:38:42 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/02 16:12:45 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

char	*get_next_line(int fd)
{
	int			i;
	char		line;
	static char	temp[BUFFER_SIZE + 1];

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (temp[i])
			temp[i++] = 0;
		return (NULL);
	}
	line = NULL;
	// aqui tenho de ver se o buffer esta vazio ou nao, caso nao esteja tem de ser colocado 
	//na new line antes de voltar a ler
	while (read(fd, temp, BUFFER_SIZE))
	{
		line = strjoin(line, temp);
	}
}

/*int main()
{
	int	fd;
	char	*line;
	
	fd = open("mair.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
}*/