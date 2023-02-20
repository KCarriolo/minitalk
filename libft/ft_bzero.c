/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:39:25 by kefernan          #+#    #+#             */
/*   Updated: 2022/05/25 13:56:16 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	count;
	char			*temp_s;

	temp_s = (char *) s;
	count = 0;
	while (count < n)
	{
		temp_s[count] = '\0';
		count++;
	}
}
