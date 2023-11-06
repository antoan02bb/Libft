/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:17:07 by aantonie          #+#    #+#             */
/*   Updated: 2023/11/06 13:39:23 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_split_next
{
	size_t	start;
	size_t	length;
}				t_split_next;

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strrchr(const char *str, int c);

int		ft_strcmp(const char *str1, const char *str2);

char	*ft_strchr(const char *str, int c);

int		ft_atoi(const char *str);

void	*ft_memchr(const void *s, int c, size_t n);

size_t	ft_strlcat(char *dest, const char *source, size_t destsz);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_calloc(size_t count, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_itoa(int n);

char	**ft_split(char const *str, char delimiter);

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strdup(const char *s1);

char	*ft_strnstr(char const *haystack, char const *needle, size_t len);

int		ft_memcmp(const void *s1, const void *s2, size_t len);

int		ft_strncmp(char const *s1, char const *s2, size_t n);

void	ft_putendl_fd(char *s, int fd);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif