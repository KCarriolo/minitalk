/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toui.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:34:47 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 09:51:13 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int n)
{
	int	l;

	l = 0;
	if (n == 0)
		n += 1;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_toui(unsigned int u)
{
	int		i;
	char	*str;

	i = ft_count(u);
	str = (char *) malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (u == 0)
		str[0] = '0';
	str[i] = '\0';
	while (u != 0)
	{
		str[--i] = (u % 10) + 48;
		u = u / 10;
	}
	return (str);
}
