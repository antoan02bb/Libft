/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:23:42 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/10 18:27:36 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memcpy(void *dest, void *src, int n)
{
    if (dest == NULL)
    {
        return NULL;
    }
        
    char *char_dest = (char *)dest;
    char *char_src = (char *)src;
    
    int i = 0;
    while (i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return  (dest);
}
