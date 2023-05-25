/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:40:37 by carlosdelaf       #+#    #+#             */
/*   Updated: 2023/05/25 18:44:34 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int     ft_strlen(char *str)
{
    int     i;
    while (str[i])
        i++;
    return (i);
}

char    *ft_free(char *line)
{
    char    *str;

    while(line)
    {
        *str = *line;
        str++;
        line++;
    }
    free(line);
    return (str);
}

char    *ft_strjoin(char *dest, char *src)
{
    
}