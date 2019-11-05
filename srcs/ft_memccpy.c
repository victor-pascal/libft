/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:46:38 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/05 13:25:06 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char *)d;
	source = (unsigned char *)s;
	while ((int)n-- > 0)
	{
		if (*source == (unsigned char)c)
		{
			*destination++ = *source++;
			return (destination);
		}
		*destination++ = *source++;
	}
	return (NULL);
}
