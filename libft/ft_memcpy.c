/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:46:19 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/10 09:47:34 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		count;
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;

	count = 0;
	dst_temp = (unsigned char *) dst;
	src_temp = (unsigned char *) src;
	if (dst_temp == 0 && src_temp == 0)
		return (0);
	while (count < n)
	{
		dst_temp[count] = src_temp[count];
		count++;
	}
	return (dst_temp);
}
