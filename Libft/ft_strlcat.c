/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:00:53 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/07 16:33:23 by bbatista         ###   ########.fr       */
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
/*
int	main(void)
{
	char	src[5] = "abcd";
	char	dst1[20] = "pqrstuvwxyz";
	char	dst2[20] = "pqrstuvwxyz";
	size_t	n1;
	size_t	n2;

	n1 = strlcat(dst1, src, 3);
	n2 = ft_strlcat(dst2, src, 3);
	printf("%zu: %s, %zu: %s\n", n1, dst1, n2, dst2);
}*/
