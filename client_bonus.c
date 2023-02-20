/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:51:55 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/24 17:11:16 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_delivery(char *str, int pid);
void	ft_answer(int sig);
void	ft_fin(int pid);

int	main(int argc, char *argv[])
{
	int					p;
	char				*str;

	if (argc != 3)
	{
		write(1, "Quantidade de input errada!", 27);
		return (-1);
	}
	signal(SIGUSR1, &ft_answer);
	str = argv[2];
	p = ft_atoi((const char *) argv[1]);
	ft_delivery(str, p);
	return (0);
}

void	ft_delivery(char *str, int pid)
{
	int		i;
	int		j;
	int		c;

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
	ft_fin(pid);
}

void	ft_answer(int sig)
{
	if (sig == SIGUSR1)
		write(1, "Just responding you back to assure the bonus :I", 47);
}

void	ft_fin(int pid)
{
	int	i;

	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(250);
	}
}
