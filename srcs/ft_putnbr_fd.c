/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:30:57 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 19:58:10 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int number;

	number = (n < 0) ? n * -1 : n;
	if (n < 0)
		write(fd, "-", 1);
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	number %= 10;
	number += '0';
	write(fd, &number, 1);
}
