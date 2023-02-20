/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:48:27 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/15 10:35:23 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sputunbr(unsigned int u)
{
	char	*str;
	int		len;

	str = ft_toui(u);
	len = ft_sputstr(str);
	free(str);
	return (len);
}
