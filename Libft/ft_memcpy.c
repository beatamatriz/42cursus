/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:59:45 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/07 18:41:11 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (!(dst || src) && n != 0)
		return (NULL);
	if (dst == src)
		return (dst);
	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	while (n-- != 0)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
