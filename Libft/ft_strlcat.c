/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:00:53 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:04:58 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	catsize;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstsize < dstlen)
		catsize = dstsize;
	else
		catsize = ft_strlen(dst);
	catsize += ft_strlcpy(dst + catsize, src, dstsize - catsize);
	return (catsize);
}
