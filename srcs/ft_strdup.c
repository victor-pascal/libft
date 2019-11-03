/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorpascal <victorpascal@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:55:16 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/03 13:18:06 by victorpasca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*allocated;
	int		i;

	i = 0;
	if (!(allocated = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (*s1)
	{
		allocated[i] = *s1;
		s1++;
		i++;
	}
	allocated[i] = '\0';
	return (allocated);
}
