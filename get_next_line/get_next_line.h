/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:41:31 by bbatista          #+#    #+#             */
/*   Updated: 2024/09/23 13:58:55 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifdef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


char	*get_next_line(int fd);

int	ft_strlen(char *str);

char	*ft_strjoin(char *s1, char *s2);

void	ft_bzero(void *ptr, size_t size);

void	*ft_calloc(size_t nitems, size_t size);

#endif
