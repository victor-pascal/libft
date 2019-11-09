/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 00:52:39 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:02:53 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	return (NULL);
}
