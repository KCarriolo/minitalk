/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:25:04 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/19 17:42:48 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	funk_action(int sig, siginfo_t *info, void *ucontext);

int	main(void)
{
	int					pid;
	struct sigaction	sigac;

	pid = getpid();
	sigac.sa_sigaction = &funk_action;
	sigac.sa_flags = SA_SIGINFO;
	write(1, "\nThis is my Process ID: ", 24);
	ft_putnbr_fd(pid, 1);
	write(1, "\n\n", 2);
	sigaction(SIGUSR1, &sigac, NULL);
	sigaction(SIGUSR2, &sigac, NULL);
	while (1)
		pause();
	return (0);
}

void	funk_action(int sig, siginfo_t *info, void *ucontext)
{
	static int	c;
	static int	i;

	ucontext = NULL;
	c = c << 1;
	if (sig == SIGUSR2)
		c++;
	i++;
	if (i == 8)
	{
		if (c == 0)
			kill(info->si_pid, SIGUSR1);
		write(1, &c, 1);
		c = 0;
		i = 0;
	}	
}
