/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:01:57 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/11 22:21:21 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	char	*dest;
	const char	*src;
	size_t	i;

	dest = (char *)destination;
	src = (char *)source;
	if (dest > src)
	{
		while (len > 0)
		{
			dest[len - 1] = src[len - 1];
			len--;
		}
	}
	else if (dest < src)
	{
		i = 0;
        while (i < len)
		{
        	dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
