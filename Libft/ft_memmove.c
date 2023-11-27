/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:09:19 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 18:23:26 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (dst < src)
	{
		tmp_dst = (char *) dst;
		tmp_src = (char *) src;
		while (len-- > 0)
			*tmp_dst++ = *tmp_src;
	}
	else
	{
		tmp_dst = (char *) dst + (n - 1);
		tmp_src = (char *) src + (n - 1);
		while (n-- > 0)
			*tmp_dst-- = tmp_src--;
	}
	return (dst);
}
