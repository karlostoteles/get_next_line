/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:43:58 by carlde-l          #+#    #+#             */
/*   Updated: 2023/03/01 18:43:10 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1

# include <limits.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char    *get_next_line(int fd);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_free(char *str);

int     ft_strlen(char *str);
int     ft_checkstatic(char *str);
int     ft_find(char *str, char c);

#endif