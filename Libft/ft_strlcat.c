/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:00:53 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 18:59:27 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	catsize;

	catsize = ft_strlen(dst);
	catsize += ft_strlcpy(dst + catsize, src, dstsize - catsize);
	return (catsize);
}

int	main(void)
{
	char	src[5] = "abcd";
	char	dst1[16] = "pqrstuvwxyz";
	char	dst2[16] = "pqrstuvwxyz";
	size_t	n1;
	size_t	n2;

	n1 = strlcat(dst1, src, 0);
	n2 = ft_strlcat(dst2, src, 0);
	printf("%zu: %s, %zu: %s", n1, dst1, n2, dst2);
}
