/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:34:04 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/25 18:43:47 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char     *stash[OPEN_MAX];
    char            *line;
    
    if (fd <= 0 || BUFFER_SIZE <= 0 || fd > 256)
        return (NULL);
    line = NULL;
    stash[fd] = ft_read_and_stash(fd, stash[fd]);
    if (!stash[fd])
        return (NULL);
    line = ft_line(stash[fd]);
    stash[fd] = ft_clean(stash[fd]);
    return (line);
}

char    *ft_read_and_stash(int fd, char *stash)
{
    char            *buf;
    int             bytes_read;

    buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buf)
        return (NULL);
    bytes_read = 1;
    while (!ft_strchr(stash, '\n') && bytes_read != 0)
    {
        bytes_read = read(fd, buf, BUFFER_SIZE + 1);
        if (bytes_read == -1)
        {
            free(buf);
            return (NULL);
        }
        buf[bytes_read] = '\0';
        ft_strjoin(stash[fd], buf);
    }
    free(buf);
    return (stash[fd]);
}

char    *ft_line(char *stash)
{
    char    *line;
    int     i;

    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    line = malloc(sizeof(char) * (i + 2));
    if (!line)
        return (NULL);
    while (stash[i] && stash[i] != '\n')
    {
        line[i] = stash[i];
        i++;
    }
    if (stash[i] == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return (ft_free(line));
}

char    *ft_clean(char *stash)
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    j = ft_strlen(stash);
    while (stash[i] && stash[i] != '\n')
        i++;
    if (!stash[i])
    {
        free(stash);
        return (NULL);
    }
    str = malloc(sizeof(char) * (j - i + 1));
    if (!str)
        return (NULL);
    j = 0;
    while (stash[i])
        str[j++] = stash[i++];
    str[j] = '\0';
    free(stash);
    return (str);
}