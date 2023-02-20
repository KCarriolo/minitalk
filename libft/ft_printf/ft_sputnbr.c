/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:02:00 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 09:50:03 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sputnbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = ft_sputstr(str);
	free(str);
	return (len);
}
