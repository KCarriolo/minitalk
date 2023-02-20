/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:37:26 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 09:40:01 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(char const *s, int i, va_list arg)
{
	if (s[i + 1] == '%')
		return (ft_sputchar(s[i + 1]));
	else if (s[i + 1] == 'i' || s[i + 1] == 'd')
		return (ft_sputnbr(va_arg(arg, int)));
	else if (s[i + 1] == 'c')
		return (ft_sputchar(va_arg(arg, int)));
	else if (s[i + 1] == 's')
		return (ft_sputstr(va_arg(arg, char *)));
	else if (s[i + 1] == 'u')
		return (ft_sputunbr(va_arg(arg, unsigned int)));
	else if (s[i + 1] == 'x' || s[i + 1] == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), s[i + 1]));
	else if (s[i + 1] == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	else
		return (0);
}
