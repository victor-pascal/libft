/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:46:38 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 16:11:35 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char *)d;
	source = (unsigned char *)s;
	if (!n || n < 0)
		return (NULL);
	while (n-- > 0)
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
