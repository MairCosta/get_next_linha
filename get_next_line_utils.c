/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:18:08 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/03 14:37:40 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *line, char *buf)
{
	char	*newln;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	newln = malloc(ft_strlen(line) + ft_strlen(buf) + 1);
	if (!newln)
		return (NULL);
	while (line[i])
	{
		newln[i] = line[i];
		i++;
	}
	free (line);
	while (buf[j])
		newln[i++] = buf[j++];
	newln[i] = '\0';
	free(buf);
	return (newln);
}

char	ft_managebuf(char *buf)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!buf)
		return ;
	while (buf[i])
	{
		if (buf[i] == '\n')
			i++;
		buf[j++] == buf[i++];
	}
	while (buf[j])
		buf[j++] == 0;
}