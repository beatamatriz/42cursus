/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:26:19 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:01:27 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_skip_spaces(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

static char	*ft_skip_zeroes(char *str)
{
	while (*str == '0')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int		n;
	int		sign;
	char	*tmp;

	tmp = (char *) str;
	tmp = ft_skip_spaces(tmp);
	tmp = ft_skip_zeroes(tmp);
	n = 0;
	sign = 1;
	if (*tmp == '-')
	{
		sign = -1;
		tmp++;
	}
	else if (*tmp == '+')
		tmp++;
	while (*tmp >= '0' && *tmp <= '9')
	{
		n *= 10;
		n += *tmp - '0';
		tmp++;
	}
	return (n * sign);
}
