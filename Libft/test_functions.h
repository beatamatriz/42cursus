/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:31:52 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/28 10:22:29 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FUNCTIONS_H
# define TEST_FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void	test_isalpha(char *arg);
void	test_isdigit(char *arg);
void	test_isalnum(char *arg);
void	test_isascii(char *arg);
void	test_isprint(char *arg);
void	test_strlen(char *arg);
void	test_memset(char *arg);
void	test_bzero(char *arg);
void	test_memcpy(char *arg);
void	test_memmove(char *arg);
void	test_strlcpy(char *arg);
void	test_strlcat(char *arg);
void	test_toupper(char *arg);
void	test_tolower(char *arg);
void	test_strchr(char *arg);
void	test_strrchr(char *arg);

#endif
