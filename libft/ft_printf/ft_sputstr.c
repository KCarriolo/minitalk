/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:15:36 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/01 09:34:49 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sputstr(char	*s)
{
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}
