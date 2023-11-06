/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:56:37 by aantonie          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/06 02:39:44 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	works at the byte level, as it operates on individual characters
within the input string s. It copies each character one by one
from the source string to the destination string based on the
specified start and len parameters.		*/
=======
/*   Updated: 2023/10/30 02:48:56 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	works at the byte level, as it operates on individual characters 
within the input string s. It copies each character one by one 
from the source string to the destination string based on the 
specified start and len parameters.	 */
>>>>>>> origin/main

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
<<<<<<< HEAD
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
=======
	size_t	j;
	char	*str;

>>>>>>> origin/main
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
<<<<<<< HEAD
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	str = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = '\0';
// 	return (str);
// }
=======
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
>>>>>>> origin/main
