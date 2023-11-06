/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:34:44 by aantonie          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/03 13:39:39 by aantonie         ###   ########.fr       */
=======
/*   Updated: 2023/10/17 15:48:11 by aantonie         ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t
	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
