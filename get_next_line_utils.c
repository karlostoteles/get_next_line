/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:42:08 by carlde-l          #+#    #+#             */
/*   Updated: 2023/03/02 17:18:24 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"


char    *ft_free(char *str)
{
    char    *line;

    line = str;
    free(str);
    str = NULL;
    return(line);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return i;
}

int ft_checkstatic(char *str)
{
    while(str)
    {
        if (*str == '\n' && *(str + 1) != '\n')
            return 1;
        str++;
    }
    return 0;
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;
    int     i;
    int     j;
    
    i = 0;
    if (!s1 && !s2)
        return (0);
    else if (!s1)
        return (s2);
    else if (!s2)
        return (s1);
    str = malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!str)
        return(0);
    j = 0;
    while (s1)
    {
        str[i] = s1[i];
        i++;
    }
    while (s2)
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}

int ft_find(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\n')
        i++;
    return (i);
}
