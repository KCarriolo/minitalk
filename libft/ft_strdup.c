/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 09:48:49 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/10 11:44:57 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{	
	char			*t_s1;
	size_t			l;

	l = ft_strlen((char *) s1);
	t_s1 = malloc(sizeof((char *)s1) * l + 1);
	if (!t_s1)
		return (NULL);
	ft_strlcpy(t_s1, s1, l + 1);
	return ((char *) t_s1);
}
