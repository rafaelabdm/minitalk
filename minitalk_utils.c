/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:25:13 by rabustam          #+#    #+#             */
/*   Updated: 2022/09/16 16:54:12 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	clear_bit(int c, int position)
{
	int	mask;

	mask = 1 << position;
	return (c & ~mask);
}

int	set_bit(int c, int position)
{
	int	mask;

	mask = 1 << position;
	return (c | mask);
}

char	*add_char_to_str(char *message, char c)
{
	char	*ret;
	size_t	size;
	int		i;

	if (!message)
	{
		ret = malloc(2);
		ret[0] = c;
		ret[1] = '\0';
		return (ret);
	}
	size = ft_strlen(message) + 2;
	ret = malloc(size);
	i = 0;
	while (message[i])
	{
		ret[i] = message[i];
		i++;
	}
	ret[i] = c;
	ret[i + 1] = '\0';
	free(message);
	return (ret);
}
