/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:31:47 by bbatista          #+#    #+#             */
/*   Updated: 2024/01/12 20:00:01 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putstr_reverse_fd(char *str, int end, int fd)
{
	while (--end >= 0)
		write(fd, &str[end], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[22];
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
			write(fd, "-", 1);
		i = 0;
		while (n != 0)
		{
			if (n > 0)
				str[i] = '0' + n % 10;
			else
				str[i] = '0' - n % 10;
			n /= 10;
			i++;
		}
		ft_putstr_reverse_fd(str, i, fd);
	}
}
