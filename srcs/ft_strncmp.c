/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 01:46:00 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 18:08:32 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2
	&& *s1 != '\0' && *s2 != '\0'
	&& i < n - 1 && s1++ && s2++)
		i++;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
