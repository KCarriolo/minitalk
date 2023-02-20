/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:51:55 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/19 13:55:40 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_delivery(char *str, int pid);

int	main(int argc, char *argv[])
{
	int		p;
	char	*str;

	if (argc != 3)
	{
		write(1, "Quantidade de input errada!", 27);
		return (-1);
	}	
	str = argv[2];
	p = ft_atoi((const char *) argv[1]);
	ft_delivery(str, p);
	return (0);
}

void	ft_delivery(char *str, int pid)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	while (str[j])
	{
		i = 8;
		c = str[j];
		while (i--)
		{
			if ((1 << i) & c)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(250);
		}	
		j++;
	}	
}
