/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:02:00 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/15 10:34:29 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sputnbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = ft_sputstr(str);
	free(str);
	return (len);
}
