/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:50:18 by vpascal           #+#    #+#             */
/*   Updated: 2019/10/27 07:02:23 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *alloc;

	count = (count <= 0) ? 1 : count;
	size = (size <= 0) ? 1 : size;
	if (!(alloc = (void *)malloc(count * size)))
		return (NULL);
	ft_memset(alloc, 0, size * count);
	return (alloc);
}
