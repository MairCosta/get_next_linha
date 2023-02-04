/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:18:08 by ricosta-          #+#    #+#             */
/*   Updated: 2023/02/04 18:24:33 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[++i] == '\n')
		i++;
	//printf("strlen:%ld", i);
	return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
	char *s3;
	int i;
	int j;

	i = 0;
	j = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		s3[i++] = s2[j++];
	s3[j] = '\0';
	free (s1);
	return (s3);
}

int ft_check(char *buf)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!buf)
		return (0);
	while (buf[i])
	{
		if (buf[i] == '\n')
			i++;
		buf[j++] = buf[i++];
	}
	while (buf[j])
		buf[j++] = '\0';
	return (*buf);
}
