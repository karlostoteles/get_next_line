/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:46:16 by carlde-l          #+#    #+#             */
/*   Updated: 2023/06/01 19:07:08 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *dest, char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!dest)
	{
		dest = malloc(1);
		dest[0] = 0;
	}
	str = malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	while (dest[i])
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j])
	{
		str[i + j] = src[j];
		j++;
	}
	str[i + j] = '\0';
	free(dest);
	return (str);
}

char	*ft_strchr(char *stash, char c)
{
	if (!stash)
	{
		free(stash);
		return (NULL);
	}
	while (*stash)
	{
		if (*stash && *stash == c)
			return (stash);
		stash++;
	}
	return (NULL);
}
