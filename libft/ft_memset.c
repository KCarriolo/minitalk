/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:50:02 by kefernan          #+#    #+#             */
/*   Updated: 2022/05/25 11:54:19 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*temp_b;
	unsigned int	count;

	temp_b = (char *) b;
	count = 0;
	while (count < len)
	{
		temp_b[count] = (unsigned char) c;
		count++;
	}
	return (temp_b);
}
