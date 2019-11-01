/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 09:18:18 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 19:53:51 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				get_number_length(int number)
{
	int len;

	len = 0;
	while (number)
	{
		len++;
		number /= 10;
	}
	return (len);
}

unsigned int	check_positive(int n, int *i)
{
	unsigned int result;

	result = (unsigned int)n;
	if (n < 0)
	{
		result *= -1;
		i++;
	}
	return (result);
}

int				ft_power(int number, int power)
{
	int result;

	result = number;
	while (power-- > 1)
		result *= number;
	return (result);
}

char			*ft_itoa(int n)
{
	char				*str;
	unsigned int		tmp;
	int					i;
	int					i2;

	i2 = 0;
	tmp = check_positive(n, &i);
	i = get_number_length(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	if (n < 0)
	{
		str[i2] = '-';
		i2++;
	}
	while (i > 1)
	{
		str[i2] = tmp / ft_power(10, i - 1) + '0';
		tmp -= (tmp / ft_power(10, i - 1)) * ft_power(10, i - 1);
		i2++;
		i--;
	}
	str[i2] = tmp + '0';
	str[i2 + 1] = '\0';
	return (str);
}
