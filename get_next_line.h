/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:33:59 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/26 16:27:20 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 42

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char    *get_next_line(int fd);
char    *ft_read_and_stash(int fd, char *stash);
char    *ft_line(char *stash);
char    *ft_clean(char *stash);

char    *ft_strchr(char *stash, char c);
char    *ft_strjoin(char *dest, char *src);

int     ft_strlen(char *str);

#endif