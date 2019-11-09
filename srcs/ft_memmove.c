/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:23:59 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:01:14 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	dst_c = dst;
	src_c = src;
	if (src_c == dst_c)
		return (dst);
	if (src_c < dst_c)
	{
		src_c = src_c + len - 1;
		dst_c = dst_c + len - 1;
		while (len--)
			*dst_c-- = *src_c--;
	}
	else
		while (len--)
			*dst_c++ = *src_c++;
	return (dst);
}
