/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:11:46 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/10 13:51:21 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *) malloc(len1 + len2 + 1);
	if (join)
	{
		i = 0;
		while (i < len1)
			*join++ = s1[i++];
		i = 0;
		while (i < len2)
			*join++ = s2[i++];
		*join = 0;
	}
	else
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (join - len1 - len2);
}
