/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:00:53 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 16:18:04 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	catsize;

	catsize = ft_strlen(dst);
	catsize += ft_strlcpy(dst + catsize, src, dstsize);
	return (catsize);
}
/*
int	main(void)
{
	char	src[9] = "Diablos";
	char	dst1[20] = "a! ";
	char	dst2[20] = "a! ";
	size_t	n1;
	size_t	n2;

	n1 = strlcat(dst1, src, 12);
	n2 = ft_strlcat(dst2, src, 12);
	printf("%zu: %s, %zu: %s", n1, dst1, n2, dst2);
}*/
