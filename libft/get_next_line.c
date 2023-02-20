/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:02:47 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/15 10:37:23 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_count_newline(char *s);
char	*ft_ret(char *s);
char	*ft_buffer_renew(char *s);
char	*ft_checks(int check, int fd, char *s);

char	*get_next_line(int fd)
{
	char		*ret;
	static char	*s;

	if (BUFFER_SIZE < 1)
	{
		if (s)
			free(s);
		return (NULL);
	}
	if (!s)
		s = ft_gnl_strdup("");
	s = ft_checks(1, fd, s);
	if (!s)
		return (NULL);
	ret = ft_ret(s);
	s = ft_buffer_renew(s);
	return (ret);
}

char	*ft_checks(int check, int fd, char *s)
{
	char	*auxbuff;

	while (check > 0 && !ft_gnl_strchr((const char *) s, '\n'))
	{
		auxbuff = ft_gnl_calloc(BUFFER_SIZE + 1, sizeof(char));
		check = read(fd, auxbuff, BUFFER_SIZE);
		if (check < 0)
		{
			free(s);
			free(auxbuff);
			return (NULL);
		}
		if (check > 0)
			s = ft_gnl_strjoin(s, auxbuff);
		else
			free(auxbuff);
	}
	return (s);
}

size_t	ft_find_newline(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != '\n'))
		i++;
	return (i);
}

char	*ft_ret(char *s)
{
	int		i;
	char	*ret;

	if (!s[0])
		return (NULL);
	i = ft_find_newline(s);
	ret = ft_gnl_calloc(i + 2, sizeof(char));
	while (i >= 0)
	{
		ret[i] = s[i];
		i--;
	}
	return (ret);
}

char	*ft_buffer_renew(char *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*renew;

	if (!ft_gnl_strchr((const char *)s, '\n'))
	{	
		free(s);
		return (NULL);
	}
	i = ft_find_newline(s);
	len = ft_gnl_strlen(s);
	i++;
	renew = ft_gnl_calloc((len - i) + 1, sizeof(char));
	j = 0;
	while ((i + j) < len)
	{
		renew[j] = s[i + j];
		j++;
	}
	free(s);
	return (renew);
}
