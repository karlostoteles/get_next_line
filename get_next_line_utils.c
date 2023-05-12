/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosdelafiguera <carlosdelafiguera@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/05/04 19:20:40 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/11 11:47:41 by carlde-l         ###   ########.fr       */
=======
/*   Created: 2023/02/09 06:42:08 by carlde-l          #+#    #+#             */
/*   Updated: 2023/04/15 09:02:31 by carlosdelaf      ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

<<<<<<< HEAD
size_t  ft_strlen(char *str)
{
    size_t i;
    while (str != '\0')
        i++;
    return (i);
=======
#include "get_next_line.h"

char	*ft_check(const  char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

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
>>>>>>> refs/remotes/origin/master
}