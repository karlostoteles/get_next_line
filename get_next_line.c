/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:34:04 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/11 11:48:11 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char     *stash[1024];
    int             len;
    
    
    if (fd <= 0 || BUFFER_SIZE <= 0 || )
        return (NULL);
    read
}
int main()
{
    int fd;

    fd = open("pepe.txt", O_RDONLY);
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
}