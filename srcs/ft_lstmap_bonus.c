/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpascal <vpascal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:45:51 by vpascal           #+#    #+#             */
/*   Updated: 2019/11/01 20:45:52 by vpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_item;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(new_item = ft_lstnew(lst->content)))
		{
			free(new_list);
			return (NULL);
		}
		if (del)
			del(new_list->content);
		new_item->content = f(new_item->content);
		ft_lstadd_back(&new_list, new_item);
		lst = lst->next;
	}
	return (new_list);
}
