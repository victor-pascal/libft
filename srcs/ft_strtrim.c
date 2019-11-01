/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 02:52:36 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 19:52:10 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contains(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		length;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (contains((char *)set, *s1) && *s1)
		s1++;
	length = ft_strlen(s1) - 1;
	i = 0;
	while (length > 0 && contains((char *)set, s1[length]))
		length--;
	if (!(str = (char *)malloc(sizeof(char) * (length + 2))))
		return (NULL);
	while (i <= length && *s1)
		str[i++] = *s1++;
	str[i] = '\0';
	return (str);
}
