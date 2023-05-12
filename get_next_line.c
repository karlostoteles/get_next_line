/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <carlde-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:34:04 by carlde-l          #+#    #+#             */
/*   Updated: 2023/05/12 16:58:46 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char     *stash[1024];
    int             len;
    
    
    if (fd <= 0 || BUFFER_SIZE <= 0 || )
        return (NULL);
    read
