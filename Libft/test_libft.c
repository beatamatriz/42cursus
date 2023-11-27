/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:10:23 by bbatista          #+#    #+#             */
/*   Updated: 2023/11/27 16:50:39 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function_testers.h"

int	test_function(int argc, char *argv[])
{
	int	function = atoi(argv[1]);

	switch (function)
	{
		case 0:
			if (argc != 3)
				return (1);
			else
			{
				test_isalpha(argv[2]);
			}
			break;
		case 1:
			if (argc != 3)
				return (1);
			else
			{
				test_isdigit(argv[2]);
			}
			break;
		case 2:
			if (argc != 3)
				return (1);
			else
			{
				test_isalnum(argv[2]);
			}
			break;
		case 3:
			if (argc != 3)
				return (1);
			else
			{
				test_isascii(argv[2]);
			}
			break;
		case 4:
			if (argc != 3)
				return (1);
			else
			{
				test_isprint(argv[2]);
			}
			break;	
		default:
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	exit_code;
	if (argc <= 2)
		return (1);
	else
		exit_code = test_function(argc, argv);
	return (exit_code);
}
