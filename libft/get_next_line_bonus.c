/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:02:47 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/15 10:38:13 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_count_newline(char *s);
char	*ft_ret(char *s);
char	*ft_buffer_renew(char *s);
char	*ft_checks_bonus(int check, int fd, char **s);

char	*get_next_line(int fd)
{
	char		*ret;
	static char	*s[260];

	if (BUFFER_SIZE < 1)
	{
		if (s[fd])
			free(s);
		return (NULL);
	}
	if (!s[fd])
		s[fd] = ft_gnl_strdup("");
	s[fd] = ft_checks_bonus(1, fd, s);
	if (!s[fd])
		return (NULL);
	ret = ft_ret(s[fd]);
	s[fd] = ft_buffer_renew(s[fd]);
	return (ret);
}

char	*ft_checks_bonus(int check, int fd, char **s)
{
	char	*auxbuff;

	while (check > 0 && !ft_gnl_strchr((const char *) s[fd], '\n'))
	{
		auxbuff = ft_gnl_calloc(BUFFER_SIZE + 1, sizeof(char));
		check = read(fd, auxbuff, BUFFER_SIZE);
		if (check < 0)
		{
			free(s[fd]);
			free(auxbuff);
			return (NULL);
		}
		if (check > 0)
			s[fd] = ft_gnl_strjoin(s[fd], auxbuff);
		else
			free(auxbuff);
	}
	return (s[fd]);
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
