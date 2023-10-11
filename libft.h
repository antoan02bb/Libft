/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:17:07 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/11 15:03:21 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t  ft_strlen(const char *s);

int	ft_tolower(int c);

int	ft_toupper(int c);

void	*ft_memset(void *b, int c, size_t len);

#endif