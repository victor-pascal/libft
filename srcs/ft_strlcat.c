/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:49:33 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 18:09:11 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	final_size;
	size_t	size_dst;
	size_t	i;

	i = 0;
	size_dst = 0;
	final_size = 0;
	while (dst[size_dst] && size_dst < dstsize)
		++size_dst;
	while (src[final_size])
		++final_size;
	if (size_dst >= dstsize)
		final_size += dstsize;
	else
		final_size += size_dst;
	while (size_dst + 1 < dstsize && src[i])
	{
		dst[size_dst] = src[i];
		i++;
		size_dst++;
	}
	if (size_dst != dstsize)
		dst[size_dst] = '\0';
	return (final_size);
}
