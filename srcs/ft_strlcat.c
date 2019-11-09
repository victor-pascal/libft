/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:49:33 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:01:28 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	i = 0;
	while (src[i] != '\0' && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		++i;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
