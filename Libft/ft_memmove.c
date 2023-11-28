/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:09:19 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 17:09:37 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (dst < src)
	{
		tmp_dst = (char *) dst;
		tmp_src = (char *) src;
		while (len-- > 0)
			*tmp_dst++ = *tmp_src;
	}
	else
	{
		tmp_dst = (char *) dst + (len - 1);
		tmp_src = (char *) src + (len - 1);
		while (len-- > 0)
			*tmp_dst-- = *tmp_src--;
	}
	return (dst);
}
