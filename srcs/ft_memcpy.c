/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:48:00 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 13:07:06 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*source;
	char	*destination;

	if (!src && !dst)
		return (NULL);
	source = (char *)src;
	destination = (char *)dst;
	while (n-- > 0)
		*destination++ = *source++;
	return (dst);
}
