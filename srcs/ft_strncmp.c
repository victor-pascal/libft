/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 01:46:00 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 22:02:33 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0') && n != 1)
	{
		--n;
		++s1;
		++s2;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
