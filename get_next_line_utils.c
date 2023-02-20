/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 06:42:08 by carlde-l          #+#    #+#             */
/*   Updated: 2023/02/15 13:39:39 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"


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
        if (*str == '\n')
            return 1;
        str++;
    }
    return 0;
}