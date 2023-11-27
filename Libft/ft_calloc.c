/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:56:49 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 19:29:46 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	register void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

int	main(void)
{
	int	*vector_de_numeritos;
	int	*vector_de_numeritos2;
	int i;
	int dim = 100;

	vector_de_numeritos = (int *) ft_calloc(dim, sizeof(int));
	vector_de_numeritos2 = (int *) calloc(dim, sizeof(int));
	i = 0;
	while (i < dim - 1)
	{
		printf("%d:%d, ", vector_de_numeritos[i], vector_de_numeritos2[i]);
		i++;
	}
	printf("%d:%d", vector_de_numeritos[i], vector_de_numeritos2[i]);
	return (0);
}
