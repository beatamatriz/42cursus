/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:55 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/16 14:40:45 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *lst;
	*lst = NULL;
	while (tmp)
	{
		tmp_next = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = tmp_next;
	}
}
