/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:08:55 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/17 15:48:49 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Check if c is the null terminator character ('\0')

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		str++;
	}
	if ((char)c == '\0' && str[i] == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *result = ft_strchr("teste", 'e');
// 	printf("result: %p\n", (void *)result);
// 	return (0);
// }
