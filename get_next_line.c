/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:44:11 by carlde-l          #+#    #+#             */
/*   Updated: 2023/03/02 17:18:21 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *buf[OPEN_MAX];
    char    *line;
    int i;
    
    //capar inicio de programa
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	    return (NULL);
    //clean and read plus next
   

	





    //copy and end
    i = 0;
    line = malloc(BUFFER_SIZE + 1);
    if (!line)
        return (NULL);
    while (buf[i] != '\n')
    {
        line[i] = buf[i];
        i++;
    }
    *buf = *(buf + i);
    line[i] = '\n';
    line[i + 1] = '\0';
    return (ft_free(line)); 
}

int main()
{
    // Open by file or by path
    int             fd;

    if (open("pepe.txt", O_RDONLY) < 0)
    {
        return -1;
    }
    fd = open("pepe.txt", O_RDONLY);
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    //printf("%s\n",get_next_line(fd));
}
