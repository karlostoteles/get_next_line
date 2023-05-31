/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:34:04 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/31 16:42:06 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*stash[OPEN_MAX];
	char			*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
	return (NULL);
	line = NULL;
	stash[fd] = ft_read_and_stash(fd, stash[fd]);
	if (!stash[fd] || !stash[fd][0])
		return (free(stash[fd]), stash[fd] = NULL, NULL);
	//printf("stash:%s\n", stash[fd]);
	line = ft_line(stash[fd]);
	stash[fd] = ft_clean(stash[fd]);
	return (line);
}

char	*ft_read_and_stash(int fd, char *stash)
{
	char	*buf;
    int		bytes_read;

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buf)
        return (NULL);
    bytes_read = 1;
    while (!ft_strchr(stash, '\n') && bytes_read != 0)
	{
        bytes_read = read(fd, buf, BUFFER_SIZE);
        if (bytes_read == -1)
		{
            free(buf);
            return (NULL);
		}
        buf[bytes_read] = '\0';
        stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);
}

char	*ft_line(char *stash)
{
    char	*line;
    int		i;
	
    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    line = malloc(sizeof(char) * (i + 2));
    if (!line)
        return (NULL);
    i = 0;
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
	//printf("stash en ft_line%s\n", stash);
    //free(stash);
    return (line);
}

char	*ft_clean(char *stash)
{
    char	*str;
    int		i;
    int		j;

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
        return (free(stash), NULL);
    j = 0;
    while (stash[++i] && stash[i])
      	str[j++] = stash[i];
    str[j] = '\0';
    free(stash);
	stash = NULL;
    return (str);
}
