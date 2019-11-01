/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 00:54:57 by vpascal           #+#    #+#             */
/*   Updated: 2019/10/25 19:28:49 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;

	length = 0;
	while (*s != '\0' && s++)
		length++;
	while (*s != c && length > 0 && s--)
		length--;
	if ((*s == '\0' && c != '\0') || *s != c)
		return (NULL);
	return ((char *)s);
}
