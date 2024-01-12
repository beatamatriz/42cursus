/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:03:43 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:06:43 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start < 0 || len == 0 || src_len <= start || src_len == 0)
	{
		sub = (char *) malloc(1);
		if (sub)
			*sub = '\0';
		else
			errno = ENOMEM;
		return (sub);
	}
	else if (len < 0)
		len = src_len;
	else if (src_len - start < len)
		len = src_len - start;
	sub = (char *) malloc(len + 1);
	if (sub)
		len = ft_strlcpy(sub, &s[start], len + 1);
	else
		errno = ENOMEM;
	return (sub);
}
