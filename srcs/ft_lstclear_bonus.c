/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:44:47 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 20:44:48 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *tmp;

	list = *lst;
	while (list)
	{
		tmp = list->next;
		del(list->content);
		free(list);
		list = tmp;
	}
	*lst = NULL;
}
