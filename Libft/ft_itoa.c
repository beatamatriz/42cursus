/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:19:14 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:02:41 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long n)
{
	int	digits;

	if (!n)
		return (1);
	digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	ft_fill_num(char *str, int num, int digits)
{
	if (num < 0)
	{
		str[0] = '-';
		str[digits + 1] = 0;
	}
	else
		str[digits] = 0;
	while (--digits >= 0)
	{
		if (num >= 0)
			str[digits] = '0' + num % 10;
		else
			str[digits + 1] = '0' - num % 10;
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	long	tmp;

	tmp = (long) n;
	digits = ft_countdigits(tmp);
	if (tmp >= 0)
		str = (char *) malloc(digits + 1);
	else
		str = (char *) malloc(digits + 2);
	if (str)
		ft_fill_num(str, tmp, digits);
	else
		errno = ENOMEM;
	return (str);
}
