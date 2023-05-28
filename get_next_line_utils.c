/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:40:37 by carlosdelaf       #+#    #+#             */
/*   Updated: 2023/05/25 21:18:18 by carlosdelaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *dest, char *src)
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!dest || !src)
        return (NULL);
    str = malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
    while(dest[i])
    {
        str[i] = dest[i];
        i++;
    }
    while(src[j])
    {
        str[i + j] = src[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}

char    *ft_strchr(char *stash, char c)
{
    if (!stash)
        return (NULL);
    while (stash)
    {
        if (*stash == c)
            return (stash);
        stash++;
    }
    return (NULL);
}