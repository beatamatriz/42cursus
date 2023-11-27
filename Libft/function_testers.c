/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_testers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:37:07 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 18:08:57 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_testers.h"

void test_isalpha(char *arg)
{
	while (*arg != '\0')
	{
		printf("%c isalpha: %d ft_isalpha: %d\n", *arg, isalpha(*arg), ft_isalpha(*arg));	
		arg++;
	}
}

void test_isdigit(char *arg)
{
	while (*arg != '\0')
	{
		printf("%c isdigit: %d ft_isdigit: %d\n", *arg, isdigit(*arg), ft_isdigit(*arg));	
		arg++;
	}
}

void test_isalnum(char *arg)
{
	while (*arg != '\0')
	{
		printf("%c isalnum: %d ft_isalnum: %d\n", *arg, isalnum(*arg), ft_isalnum(*arg));	
		arg++;
	}
}

void test_isascii(char *arg)
{
	while (*arg != '\0')
	{
		printf("%c isascii: %d ft_isascii: %d\n", *arg, isascii(*arg), ft_isascii(*arg));	
		arg++;
	}
}

void test_isascii(char *arg)
{
	while (*arg != '\0')
	{
		printf("%c isprint: %d ft_isprint: %d\n", *arg, isprint(*arg), ft_isprint(*arg));	
		arg++;
	}
}

void test_strlen(char *arg)
{
	printf("%s strlen: %d ft_strlen: %d", *arg, strlen(*arg), ft_strlen(*arg));
}

void test_memcpy(char *s1, char *s2, int len);
