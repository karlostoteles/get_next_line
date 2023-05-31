/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:40:37 by carlosdelaf       #+#    #+#             */
/*   Updated: 2023/05/31 15:42:36 by carlde-l         ###   ########.fr       */
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
	//printf("src en strjoin:%s\n", str);
	if (!dest)
    {
        dest = malloc(1);
        dest[0] = 0;
    }
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
	free(dest);
	//printf("str en strjoin:%s\n", str);
    return (str);
}

char    *ft_strchr(char *stash, char c)
{
    if (!stash)
        return (NULL);
    while (*stash)
    {
        if (*stash && *stash == c)
            return (stash);
        stash++;
    }
    return (NULL);
}
