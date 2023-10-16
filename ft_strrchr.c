/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:04:48 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/15 12:54:29 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	if (str == NULL)
		return (NULL);
	result = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			result = (char *)str;
		str++;
	}
	if (result == NULL && c != '\0')
		return (NULL);
	return (result);
}
