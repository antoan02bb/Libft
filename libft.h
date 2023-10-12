/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:17:07 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/12 11:42:36 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>


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

void	ft_bzero(void *s, size_t n);

#endif