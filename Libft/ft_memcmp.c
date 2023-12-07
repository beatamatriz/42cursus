/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:41:45 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/07 18:17:47 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	if (!(tmp1 || tmp2))
		return (0);
	i = 0;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	printf("%s\n%s\n", s2, s3);

	printf("mine: %d c: % d\n", ft_memcmp(s2, s3, 4), memcmp(s2, s3, 4));
	return (0);
}
*/
