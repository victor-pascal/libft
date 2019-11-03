/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:31:37 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 11:32:45 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*str != (unsigned char)c)
			str++;
		else
			return (str);
	}
	return (NULL);
}
