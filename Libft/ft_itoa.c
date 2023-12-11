/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:19:14 by bbatista          #+#    #+#             */
/*   Updated: 2023/12/11 17:59:53 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long n)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
/*
static long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
*/
char	*ft_itoa(int n)
{
	char	*nombre;
	int		count;
	long	tmp;

	tmp = (long) n;
	count = ft_countdigits(tmp);
	if (tmp >= 0)
		nombre = (char *) malloc(count + 1);
	else
		nombre = (char *) malloc(count + 2);
	if (nombre)
	{	
		if (tmp < 0)
			nombre[0] = '-';
		while (--count >= 0)
		{
			if (tmp >= 0)
				nombre[count] = '0' + tmp % 10;
			else
				nombre[count + 1] = '0' - tmp % 10;
			tmp /= 10;
		}
	}
	else
		errno = ENOMEM;
	return (nombre);
}
/*
int	main(void)
{
	printf("%d, %d, %d\n",ft_countdigits(0), ft_countdigits(-623), ft_countdigits(-10));
	printf("-9 : %s\n", ft_itoa(-9));
	printf("-2147483648 : %s\n", ft_itoa(-2147483648LL));
	printf("0 : %s\n", ft_itoa(0));
	printf("10 : %s\n", ft_itoa(10));
	printf("-1234: %s\n", ft_itoa(-1234));
	printf("111113 : %s\n", ft_itoa(111113));
	printf("2147483647 : %s\n", ft_itoa(2147483647));
	return (0);
}
*/
