/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:59:45 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 17:09:51 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;

	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	while (n-- != 0)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
