/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:29:16 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 16:39:28 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
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
/*
int	main(void)
{
	char	src[9] = "Diablos";
	char	dst1[2] = "a";
	char	dst2[2] = "a";
	size_t	n1;
	size_t	n2;

	n1 = strlcpy(dst1, src, 2);
	n2 = ft_strlcpy(dst2, src, 2);
	printf("%zu: %s, %zu: %s", n1, dst1, n2, dst2);
}*/
