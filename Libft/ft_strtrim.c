/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:17:41 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/11 12:08:08 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char const *str, char const c)
{
	while (*str != 0)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	i;

	if (!set || *set == 0 || *s1 == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_isin(set, s1[i]))
		i++;
	while (i < len && ft_isin(set, s1[len - 1]))
		len--;
	if (i == len)
		return (ft_strdup(""));
	trim = ft_substr(s1, i, len - i);
	return (trim);
}
