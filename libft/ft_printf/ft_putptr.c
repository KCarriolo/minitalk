/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:54:14 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 09:48:27 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countp(unsigned long x)
{
	int	i;

	i = 0;
	if (x == 0)
		x += 1;
	while (x > 0)
	{
		x /= 16;
		i++;
	}
	return (i);
}

static char	*ft_ptoa(unsigned long x)
{
	int		i;
	int		j;
	char	*s;

	i = ft_countp(x);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i > 0)
	{
		if (x % 16 > 9)
		{
			j = x % 16;
			s[i - 1] = (j / 10 + j % 10) - 1 + 97;
			x /= 16;
		}
		else
		{
			s[i - 1] = x % 16 + 48;
			x /= 16;
		}
		i--;
	}
	return (s);
}

int	ft_putptr(void *n)
{
	unsigned long	z;
	char			*str;
	int				len;

	z = (unsigned long) n;
	len = ft_sputstr("0x");
	str = ft_ptoa(z);
	len += ft_sputstr(str);
	free(str);
	return (len);
}
