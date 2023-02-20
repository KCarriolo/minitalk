/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:49:50 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/14 10:50:10 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_tmp;
	char	*src_tmp;
	size_t	i;

	i = 0;
	dst_tmp = (char *) dst;
	src_tmp = (char *) src;
	if (dst_tmp < src_tmp)
	{
		while (i < len)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	}
	if (dst_tmp > src_tmp)
	{
		while (len--)
			dst_tmp[len] = src_tmp[len];
	}
	return (dst_tmp);
}
