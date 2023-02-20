/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:39:06 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/08 08:25:06 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n)
	{	
		while (i < n)
		{
			if (((unsigned char *) s)[i] == (unsigned char) c)
				return ((void *)(s + i));
			i++;
		}
	}	
	return (NULL);
}
