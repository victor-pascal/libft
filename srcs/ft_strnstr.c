/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:26:11 by vpascal           #+#    #+#             */
/*   Updated: 2019/10/09 19:44:12 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (haystack[i] != '\0' && i < len && needle[n] != '\0')
	{
		n = (haystack[i] == needle[n]) ? n + 1 : 0;
		i++;
	}
	return ((needle[n] == '\0') ? (char *)&haystack[i - n] : NULL);
}
