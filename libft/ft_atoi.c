/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonie <aantonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:19:56 by aantonie          #+#    #+#             */
/*   Updated: 2023/10/15 12:32:13 by aantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts a string into an integer numerical representation
// 1.Input Validation 
// 2.Checking for Negative Sign 
// 3.Checking for Positive Sign	
// 4. Accumulation with Sign Consideration:

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	result;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		is_neg = -1;
	else
		is_neg = 1;
	if ((is_neg == -1 || str[i] == '+'))
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	return (result * is_neg);
}
