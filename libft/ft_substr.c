/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:56:22 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/13 15:52:56 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t_s;
	size_t	t;

	if (!s)
		return (NULL);
	t = ft_strlen(s);
	if (start >= t)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) >= len)
		t_s = ft_calloc((len + 1), sizeof(*s));
	else
		t_s = ft_calloc(ft_strlen(&s[start]) + 1, sizeof(*s));
	if (!t_s)
		return (NULL);
	ft_strlcpy(t_s, &s[start], len + 1);
	return (t_s);
}
