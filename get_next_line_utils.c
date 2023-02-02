/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:18:08 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/02 15:39:43 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *line, char *temp)
{
	char	*newline;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	newline = malloc(ft_strlen(line) + ft_strlen(temp) + 1);
	if (!newline)
	{
		return (NULL);
	}
	while (line[i])
	{
		newline[i] = line[i];
		i++;
	}
	free (line);
	while (temp[j])
		newline[i++] = temp[j++];
	newline[i] = '\0';
	free(temp);
	return (newline);
}
