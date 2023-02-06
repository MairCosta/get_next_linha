/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:18:08 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/06 18:55:27 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return (0);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	free (s1);
	while (s2 && s2[j] && s2[j] != '\n')
		s3[i++] = s2[j++];
	if (s2[j] == '\n')
		s3[i++] = '\n';
	s3[i] = '\0';
	return (s3);
}

int	ft_check(char *buff)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	if (!buff)
		return (0);
	while (buff[i])
	{
		if (check == 1)
		{
			buff[j] = buff[i];
			j++;
		}
		if (buff[i] == '\n')
			check = 1;
		buff[i] = '\0';
		i++;
	}
	return (check);
}
