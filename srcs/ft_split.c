/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:52:41 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 19:53:20 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**start_split(char const *str, char c, char **tbl)
{
	int		i;
	int		i2;
	char	*item;

	i2 = 0;
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] != c)
			i++;
		if (!(item = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while (*str && *str != c)
			item[i++] = *(str++);
		if (i > 0)
		{
			item[i] = '\0';
			tbl[i2++] = item;
		}
		if (*str && *str == c)
			str++;
	}
	tbl[i2] = NULL;
	return (tbl);
}

int		get_n_occurences(char const *s, char c)
{
	int occurences;

	occurences = 1;
	while (*s)
	{
		if (*s == c)
			occurences++;
		s++;
	}
	return (occurences);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len;

	if (!s)
		return (NULL);
	len = get_n_occurences(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	return (start_split(s, c, result));
}
