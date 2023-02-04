/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:18:08 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/04 10:14:28 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
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
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1 && s1[i])
		s3[j++] = s1[i++];
	while (s2 && s2[i])
		s3[j++] = s2[i++];
	s3[j] = '\0';
	free(s1);
	return (s3);
}

char	ft_check(char *buf)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!buf)
		return (0);
	while (buf[i])
	{
		if (buf[i] == '\n')
			i++;
		buf[j] = buf[i];
		i++;
		j++;
	}
	while (buf[j])
		buf[j++] = '\0';
	return (*buf);
}
