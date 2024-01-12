/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:18:32 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:04:21 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_nomem(char **s, int count)
{
	int	i;

	errno = ENOMEM;
	i = 0;
	if (s)
	{
		while (i < count && s[i])
			free(s[i++]);
		free(s);
	}
	return (NULL);
}

static char	*ft_skipchar(char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

static int	ft_charinstrcount(const char *str, char c)
{
	int		count;
	char	*tmp;

	tmp = (char *) str;
	count = 1;
	while (*tmp != 0)
	{
		if (*tmp == c)
		{
			count++;
			tmp = ft_skipchar(tmp, c);
		}
		else
			tmp++;
	}
	if (*str == c || *str == 0)
		count--;
	if (*--tmp == c && tmp != str)
		count--;
	return (count);
}

static size_t	ft_strclen(char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str != c && *str != 0)
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*tmp;
	int		count;
	size_t	len;

	count = ft_charinstrcount(s, c);
	split = (char **) ft_calloc(1 + count, sizeof(char *));
	if (!split)
		return (ft_nomem(split, count));
	tmp = (char *) s;
	while (--count >= 0)
		split[count] = tmp;
	while (split[++count])
	{
		tmp = ft_skipchar(tmp, c);
		len = ft_strclen(tmp, c);
		split[count] = ft_substr(tmp, 0, len);
		if (!split[count])
			return (ft_nomem(split, count));
		tmp += len;
	}
	return (split);
}
