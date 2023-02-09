/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:44:11 by carlde-l          #+#    #+#             */
/*   Updated: 2023/02/09 11:41:18 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    // Open by file or by path
    int fd;
    void    *buf;
    static char    *str;
    if (open("pepe", O_RDONLY) < 0)
    {
        perror();
        return -1;
    }
    fd = open("pepe", O_RDONLY);
    //read file
    read(fd, buf, BUFFER_SIZE);
    printf("\n%s", buf);
    //static variable and character
    str = ft_strchr(buf, '\n');
    
}