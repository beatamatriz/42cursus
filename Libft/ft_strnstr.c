/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:21:15 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/08 13:39:36 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	if (*needle == 0)
		return ((char *) haystack);
	if (*haystack == 0 || len <= 0)
		return (NULL);
	i = 0;
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j] != 0
				&& i + j < len)
				j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
