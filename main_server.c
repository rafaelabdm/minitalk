/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:55:59 by rabustam          #+#    #+#             */
/*   Updated: 2022/09/22 17:45:02 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_pid(int s_pid)
{
	char	*pid;

	pid = ft_itoa(s_pid);
	ft_putstr_fd("Server PID: ", 1);
	ft_putstr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	free(pid);
}

char	*print_message(char *message)
{
	if (message)
	{
		ft_putstr_fd(message, 1);
		ft_putchar_fd('\n', 1);
		free(message);
		return (NULL);
	}
	return (NULL);
}

void	handle_signal(int signum, siginfo_t *info, void *context)
{
	static char	*message;
	static char	c;
	static int	bits;

	(void)context;
	if (signum == SIGUSR1)
		c = clear_bit(c, bits);
	else
		c = set_bit(c, bits);
	bits++;
	if (bits == 8)
	{
		if (c == 0)
			message = print_message(message);
		else
			message = add_char_to_str(message, c);
		bits = 0;
	}
	if (kill(info->si_pid, SIGUSR1) == -1)
	{
		ft_putstr_fd("error\n", 1);
		exit(1);
	}
}

int	main(void)
{
	struct sigaction	sa;
	sigset_t			mask;

	sigemptyset(&mask);
	sa.sa_handler = 0;
	sa.sa_flags = SA_SIGINFO;
	sa.sa_mask = mask;
	sa.sa_sigaction = &handle_signal;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	print_pid(getpid());
	while (1)
		pause();
	return (0);
}
