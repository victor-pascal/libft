/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:46:38 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 21:58:12 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char *d;

	d = (unsigned char *)dst;
	while (n-- != 0)
	{
		if ((*d++ = *((unsigned char *)src++)) == (unsigned char)c)
			return ((void *)d);
	}
	return (NULL);
}
