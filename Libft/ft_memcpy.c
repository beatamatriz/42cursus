/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:59:45 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 18:26:07 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;

	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	while (n-- != 0)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
