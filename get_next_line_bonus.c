/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 05:52:47 by carlde-l          #+#    #+#             */
/*   Updated: 2023/03/03 18:56:19 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line_bonus.h"
//extension checker for ft_read
char	*ft_check(const  char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (char *(s + i));
		i++;
	}
	return (NULL);
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
