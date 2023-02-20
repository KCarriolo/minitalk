/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:19:17 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/10 09:47:52 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	if (j == dstsize)
		return (j + ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - j) - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + j);
}
