/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:26:35 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 16:40:09 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countx(unsigned int x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (1);
	while (x > 0)
	{
		x = x / 16;
		i++;
	}
	return (i);
}

static char	*ft_xtoa(unsigned int n, char aux)
{
	char	*s;
	int		i;
	int		m;

	i = ft_countx(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i > 0)
	{
		if (n % 16 > 9)
		{
			m = n % 16;
			s[i - 1] = (m / 10 + m % 10) - 1 + aux;
			n /= 16;
		}
		else
		{
			s[i - 1] = n % 16 + 48;
			n /= 16;
		}
		i--;
	}
	return (s);
}

int	ft_puthex(unsigned int n, char k)
{
	int		len;
	char	*str;

	if (k == 'x')
		k = 'a';
	else if (k == 'X')
		k = 'A';
	str = ft_xtoa(n, k);
	len = ft_sputstr(str);
	free(str);
	return (len);
}
