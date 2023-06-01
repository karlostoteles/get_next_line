/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:31:09 by carlde-l          #+#    #+#             */
/*   Updated: 2023/06/01 18:28:30 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_read_and_stash(int fd, char *stash);
char	*ft_line(char *stash);
char	*ft_clean(char *stash);

char	*ft_strchr(char *stash, char c);
char	*ft_strjoin(char *dest, char *src);

int		ft_strlen(char *str);

#endif
