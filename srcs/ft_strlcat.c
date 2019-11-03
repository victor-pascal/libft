/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:49:33 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 12:56:00 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t dst_length;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	dst_length = i;
	if (i == dstsize)
		return (dst_length + ft_strlen(src));
	while (src[i - dst_length] && i < dstsize - 1)
	{
		dst[i] = src[i - dst_length];
		i++;
	}
	if (dst_length < dstsize)
		dst[i] = '\0';
	return (dst_length + ft_strlen(src));
}
