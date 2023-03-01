/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:44:11 by carlde-l          #+#    #+#             */
/*   Updated: 2023/02/18 14:05:30 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char    *buf[BUFFER_SIZE];
    char    *line;
    int i;
    
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	    return (NULL);
    *buf = '\0';
    while (ft_checkstatic(buf) != 0)
    {
        read("pepe", buf, BUFFER_SIZE);
    }
    i = 0;
    line = malloc(BUFFER_SIZE);
    while (buf[i] != '\n')
    {
        line[i] = buf[i];
        i++;
    }
    buf = buf + i;
    line[i] = '\n';
    
    return (ft_free(line)); 
}

int main()
{
    // Open by file or by path
    int             fd;

    if (open("pepe", O_RDONLY) < 0)
    {
        return -1;
    }
    fd = open("pepe", O_RDONLY);
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    //printf("%s\n",get_next_line(fd));
}