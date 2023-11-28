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

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	n *= sign;
	return (n);
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
	printf("str: %s\natoi: %d\nft_atoid: %d\n", argv[1], nombre, numeret);
	return (0);
}*/
