/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:43:39 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 20:43:47 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
	|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	unsigned long long	result;
	int					base;

	result = 0;
	base = 1;
	while (*str && is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		base = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (result > 9223372036854775807)
		return ((base < 0) ? 0 : -1);
	return ((int)result * base);
}
