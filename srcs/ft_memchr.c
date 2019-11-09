/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:31:37 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:02:59 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*stop;

	src = (unsigned char *)s;
	stop = (unsigned char *)(s + n);
	while (src != stop)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		++src;
	}
	return (NULL);
}
