/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:20:46 by guilhermefa       #+#    #+#             */
/*   Updated: 2024/01/23 18:19:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		if (new_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_lst);
}
