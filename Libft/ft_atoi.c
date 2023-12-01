/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:26:19 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 16:40:28 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*skip_spaces(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

char	*skip_zeroes(char *str)
{
	while (*str == '0')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;
	char	*tmp;

	tmp = (char *) str;
	tmp = skip_spaces(tmp);
	tmp = skip_zeroes(tmp);
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
/*
int	main(int argc, char *argv[])
{
	int	numeret;
	int	nombre;

	if (argc != 2)
		return (1);
	numeret = ft_atoi(argv[1]);
	nombre = atoi(argv[1]);
	printf("tmp: %s\natoi: %d\nft_atoi: %d\n", argv[1], nombre, numeret);
	return (0);
}
*/
