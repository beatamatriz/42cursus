/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:43:47 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/16 14:57:53 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_lst;
	t_list	*map_tmp;
	t_list	*tmp;

	map_lst = NULL;
	tmp = lst;
	while (tmp)
	{
		map_tmp = ft_lstnew(f(tmp->content));
		if (!map_tmp)
		{
			errno = ENOMEM;
			ft_lstclear(&map_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&map_lst, map_tmp);
		tmp = tmp->next;
	}
	return (map_lst);
}
