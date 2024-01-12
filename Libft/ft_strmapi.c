/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:19:46 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:05:40 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	tmp = malloc(len + 1);
	if (tmp)
	{
		ft_strlcpy(tmp, s, len + 1);
		i = 0;
		while (tmp[i] != 0)
		{
			tmp[i] = f(i, tmp[i]);
			i++;
		}
	}
	else
		errno = ENOMEM;
	return (tmp);
}
