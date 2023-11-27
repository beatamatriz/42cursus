/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:15:25 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 17:05:03 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char *s);
void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*memmove(void *dst, const void *src, size_t len);
size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int		toupper(int c);
int		tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int		strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);

#endif
