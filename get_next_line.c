/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 06:26:42 by carlde-l          #+#    #+#             */
/*   Updated: 2022/10/04 18:41:54 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*get_nest_line(int fd)
{
	char	*str;

	str = NULL;
	while (*fd != '\n')
	{
		str = malloc(read(fd, 1, 
		
	return (str);

}
