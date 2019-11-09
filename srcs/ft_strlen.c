/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:46:56 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/08 21:47:13 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length += 1;
	return (length);
}
