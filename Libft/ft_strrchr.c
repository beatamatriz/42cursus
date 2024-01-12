/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:46 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:06:14 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		len;

	tmp = (char *) s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (tmp[len] == (unsigned char) c)
			return (&tmp[len]);
		len--;
	}
	return (NULL);
}
