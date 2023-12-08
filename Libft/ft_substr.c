/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:03:43 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/08 14:05:21 by bbatista         ###   ########.fr       */
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
/*
int	main()
{
	printf("1 %s : %s\n", ft_substr("", 0, 0), "");
	printf("2 %s : %s\n", ft_substr("", 0, 1), "");
	printf("3 %s : %s\n", ft_substr("", 1, 1), "");
	printf("4 %s : %s\n", ft_substr("hola", -1, 0), "");
	printf("5 %s : %s\n", ft_substr("hola", 0, -1), "hola");
	printf("6 %s : %s\n", ft_substr("hola", -1, -1), "");
	printf("7 %s : %s\n", ft_substr("hola", 0, 0), "");
	printf("8 %s : %s\n", ft_substr("hola", 0, 1), "h");
	printf("9 %s : %s\n", ft_substr("hola", 0, 3), "hol");
	printf("10 %s : %s\n", ft_substr("hola", 0, 4), "hola");
	printf("11 %s : %s\n", ft_substr("hola", 0, 5), "hola");
	printf("12 %s : %s\n", ft_substr("hola", 2, 0), "");
	printf("13 %s : %s\n", ft_substr("hola", 2, 1), "l");
	printf("14 %s : %s\n", ft_substr("hola", 2, 2), "la");
	printf("15 %s : %s\n", ft_substr("hola", 2, 3), "la");
	printf("16 %s : %s\n", ft_substr("hola", 2, 30), "la");
	printf("17 %s : %s\n", ft_substr("hola", 3, 0), "");
	printf("18 %s : %s\n", ft_substr("hola", 3, 1), "a");
	printf("19 %s : %s\n", ft_substr("hola", 3, 2), "a");
	printf("20 %s : %s\n", ft_substr("hola", 4, 0), "");
	printf("21 %s : %s\n", ft_substr("hola", 4, 1), "");
	printf("22 %s : %s\n", ft_substr("hola", 4, 20), "");
	printf("23 %s : %s\n", ft_substr("hola", 5, 2), "");
}*/
