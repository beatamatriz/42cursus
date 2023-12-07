/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:46 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/07 18:49:20 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
/*
void	test(char *str, char to_find)
{
	printf("%p: %s\n%p: %s\n=============\n", ft_strchr(str, to_find),
		ft_strchr(str, to_find), strchr(str, to_find),strchr(str, to_find));
}

int	main (void)
{
	char	*str = "teste";
	char	*s1;
	char	*s2;
	char	to_find;
	
	to_find = '\0';
	test(str, to_find);
	to_find= ' ';
	while (to_find <= '~')
	{
		test(str, to_find);
		to_find++;
	}
	return (0);
}*/
