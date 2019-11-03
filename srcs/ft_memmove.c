/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:23:59 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 12:34:07 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_c;
	char	*src_c;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst_c = (char*)dst;
	src_c = (char*)src;
	i = 0;
	while ((int)len-- > 0)
	{
		if (dst_c > src_c)
			*(dst_c + len) = *(src_c + len);
		else
			*(dst_c++) = *(src_c++);
	}
	return (dst);
}
