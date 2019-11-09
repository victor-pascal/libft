/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:16:01 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:50:25 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	size_t	count;

	i = 0;
	if (!src)
		return ((size_t)0);
	count = (size_t)ft_strlen(src);
	if (dstsize == 0)
		return (count);
	while (src[i] != '\0' && i < (int)dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
