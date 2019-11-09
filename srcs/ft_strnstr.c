/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:26:11 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:02:00 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		check(const char *haystack, const char *needle, size_t n)
{
	while (n-- && *haystack && *needle && *haystack == *needle)
	{
		++haystack;
		++needle;
	}
	if (!*needle)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && len)
	{
		if (check(haystack, needle, len))
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (0);
}
