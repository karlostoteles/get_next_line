/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:43:58 by carlde-l          #+#    #+#             */
/*   Updated: 2023/02/22 14:47:21 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1
# define 

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char    *get_next_line(int fd);
int     ft_strlen(char *str);
int     ft_checkstatic(char *str);
char    *ft_strjoin(char *s1, char *s2);
int     ft_find(char *str, char c);

#endif