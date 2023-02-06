/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:57:55 by mair              #+#    #+#             */
/*   Updated: 2023/02/06 19:18:55 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line"

char    *get_next_line(int fd)
{
    int i;
    char    *line;
    static char buff[FOPEN_MAX][BUFFER_SIZE + 1];

    i = 0;
    
}

/*int main(void)
{
    int fd;
    int fd2;

    fd = open("mair.txt", O_RDONLY);
    fd2 = open("student.txt", O_RDONLY);
    printf("line 1: %s\n", get_next_line(fd));
    printf("line 2: %s\n", get_next_line(fd));
    printf("line 1: %s\n", get_next_line(fd2));
    printf("line 2: %s\n", get_next_line(fd2));
    printf("line 1: %s\n", get_next_line(fd));
    printf("line 2: %s\n", get_next_line(fd));
    close(fd);
    close (fd2);
}*/

