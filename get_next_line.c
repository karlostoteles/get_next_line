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
    int i;
    int len;
    static char *str;
    char    *line;
    void    *buf;
    
    *str = '\0';
    while (ft_checkstatic(str) != 0)
    {
        read("marcos.txt", buf, BUFFER_SIZE);
        ft_strjoin(str, buf);//modificar strjoin para coger tambien el primer caso
    }
    i = 0;
    while (str)
    {
        line[i] = str[i];
        i++;
    }
    line[i] = '\n';
    
    return *line;
    
}

int main()
{
    // Open by file or by path
    int             fd;
    
    static char     *str;
    int             len;

    len = 0;
    if (open("pepe", O_RDONLY) < 0)
    {
        perror();
        return -1;
    }
    fd = open("pepe", O_RDONLY);
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    //printf("%s\n",get_next_line(fd));


    /*
    //read file
    read(fd, buf, BUFFER_SIZE);
    printf("\n%s", buf);
    
    //static variable and character
    if (ft_strchr(buf, '\n'))
        str = ft_strchr(buf, '\n');
    */
}