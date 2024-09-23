/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:48:50 by bbatista          #+#    #+#             */
/*   Updated: 2024/09/23 13:19:18 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;
	int	bytes;
	
	bytes = line_len(fd);
	if (bytes == -1)
		return NULL;
	line = malloc((bytes + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	bytes = read(fd, line, bytes);
	if (bytes == -1)
	{
		free(line);
		return (NULL);
	}
	line[bytes] = '\0';
	close(file);
	return (line);
}
