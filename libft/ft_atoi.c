/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:03:51 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/04 15:35:43 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	char	*t_str;
	int		i;
	int		k;
	int		l;

	t_str = (char *) str;
	k = 0;
	i = 0;
	l = 1;
	if (t_str[i] == '\0')
		return (0);
	while (t_str[i] == 32 || (t_str[i] >= 7 && t_str[i] <= 13))
		i++;
	if (t_str[i] == '-' || t_str[i] == '+')
	{
		if (str[i] == '-')
			l = -1;
		i++;
	}
	while (t_str[i] >= 48 && t_str[i] <= 57)
		k = k * 10 + (t_str[i++] - '0');
	k *= l;
	return (k);
}
