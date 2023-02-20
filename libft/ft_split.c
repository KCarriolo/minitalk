/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:57:00 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/15 20:55:37 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char const *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	ft_charset2(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

static int	ft_count(char *s, char c)
{
	size_t	i;
	size_t	p;
	size_t	j;

	i = 0;
	p = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (j != i)
			p++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	p;
	char	**ret;

	i = 0;
	if (!s)
		return (NULL);
	ret = ft_calloc(sizeof(char *), ft_count((char *) s, c) + 1);
	p = 0;
	if (!ret)
		return (NULL);
	while (s[i] != '\0')
	{
		i = ft_charset(s, c, i);
		j = i;
		i = ft_charset2(s, c, i);
		if (j != i)
		{
			ret[p++] = ft_substr(s, j, (i - j));
			if (!ret[p - 1])
				return (ft_free(ret));
		}
	}
	return (ret);
}
