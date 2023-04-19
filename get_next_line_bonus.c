/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 05:52:47 by carlde-l          #+#    #+#             */
/*   Updated: 2023/04/15 09:00:58 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line_bonus.h"

char	*ft_read(int fd, char *stash)
{
	char	*buf;
	int		bytes_read;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (!ft_check(stash, '\n') && bytes_read > 0)
	{
		buf[bytes_read] = '\0';
		stash = ft_strjoin(stash, buf);
		bytes_read = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (stash);
}

char	*extract_line(char *stash)
{
	char	*newline_pos;
	char	*line;
	int		line_len;
	int		i;

	newline_pos = ft_check(stash, '\n');
	if (newline_pos)
	{
		line_len = newline_pos - stash;
		line = malloc(line_len + 1);
		if (!line)
			return (NULL);
		i = 0;
		while (i < line_len)
		{
			line[i] = stash[i];
			i++;
		}
		line[i] = '\0';
		i = 0;
		while (newline_pos[i + 1])
		{
			stash[i] = newline_pos[i + 1];
			i++;
		}
		stash[i] = '\0';
	}
	else
	{
		line_len = ft_strlen(stash);
		line = malloc(line_len + 1);
		if (!line)
			return (NULL);
		i = 0;
		while (i < line_len)
		{
			line[i] = stash[i];
			i++;
		}
		line[i] = '\0';
		free(stash);
		stash = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char *stash[__FD_SETSIZE];

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
    {
        free(stash[fd]);
        stash[fd] = NULL;
        return (NULL);
    }
	stash[fd] = ft_read(fd, stash[fd]);
	return (extract_line(stash[fd]));
}

//read and checker for static//BUFFER_SIZE mallocated
char	*ft_read(int fd, char *stash)
{
	char	*buf;
	int		bytes_read;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (!ft_check(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buf);
			return(NULL);
		}
		
	}
}


char	*get_next_line(int fd)
{
	static char	*stash[__FD_SETSIZE];
	char		*line;

	if (fd < 0 || fd > 1024)
		return (NULL);
	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buf[fd]);
		buf[fd] = NULL;
		return (NULL);
	}
	stash[fd] = ft_read(fd, stash[fd]);
}
