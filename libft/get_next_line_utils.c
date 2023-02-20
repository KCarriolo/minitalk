/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:11:41 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/15 10:37:41 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gnl_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) s;
	if (!str)
		return (0);
	while (str[i] != (char) c && str[i] != '\0')
		i++;
	if (str[i] == (char) c)
		return (&str[i]);
	return (0);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	if (!s1)
		return (s2);
	j = ft_gnl_strlen(s1);
	k = ft_gnl_strlen(s2);
	str = malloc(sizeof(char) * (j + k + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	str[j + k] = '\0';
	while (--k >= 0)
		str[j + k] = s2[k];
	free(s2);
	return (str);
}

size_t	ft_gnl_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_gnl_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size * count);
	if (!str)
		return (NULL);
	while (i < (size * count))
	{	
		str[i] = '\0';
		i++;
	}
	return ((void *) str);
}

char	*ft_gnl_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
		str[len] = s[len];
	return (str);
}
