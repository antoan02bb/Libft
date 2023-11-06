/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:40:17 by aantonie          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/03 14:23:51 by aantonie         ###   ########.fr       */
=======
/*   Updated: 2023/11/03 13:24:06 by aantonie         ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> origin/main

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
<<<<<<< HEAD
=======

// int main() 
// {
// 	char *str = "Antoniev";
// 	char *result;

// 	result = ft_strdup(str);

// 	if (result) {
// 		printf("Duplicated string: %s\n", result);
// 		free(result); // Don't forget to free the allocated memory.
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }
>>>>>>> origin/main
