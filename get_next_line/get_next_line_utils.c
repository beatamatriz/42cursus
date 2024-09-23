/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:27:04 by bbatista          #+#    #+#             */
/*   Updated: 2024/09/23 13:57:38 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int	len;
	int	i;
	int	j;
	
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
		str[i] = s1[i++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[len] = '\0';
	return (str);

}

void	ft_bzero(void *ptr, size_t size)
{
	size_t	i;

	i = 0;
	while(i < size)
		ptr[i++] = 0;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL)
	tf_bzero(ptr, nitems * size);
	return (ptr);
}
