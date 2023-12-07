/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:38:39 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/07 18:37:34 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*tmp == (unsigned char) c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}
/*
int	main(void)
{
	
}*/
