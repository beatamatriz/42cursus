/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:29:16 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:07:18 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cpysize;

	cpysize = 0;
	while (*src != '\0')
	{
		if (dstsize > 1)
		{
			*dst++ = *src;
			dstsize--;
		}
		src++;
		cpysize++;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (cpysize);
}
