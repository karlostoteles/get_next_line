/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:44:11 by carlde-l          #+#    #+#             */
/*   Updated: 2023/02/22 14:46:41 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    int i;
    static char *buf[OPEN_MAX];
    char    *line;
    
    while (ft_checkstatic(str) != 0)
    {
        read(fd, buf, 5);
        ft_strjoin(str, buf);//modificar strjoin para coger tambien el primer caso
    }
    i = 0;
    line = malloc(ft_find(str, '\n'));
    while (str)
    {
        line[i] = str[i];
        i++;
    }
    line[i] = '\n';
    str = str + i;
    
    return (line);
    
}

int main()
{
    // Open by file or by path
    int             fd;
    
    static char     *str;
    
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