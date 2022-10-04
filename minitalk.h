/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:32:56 by rabustam          #+#    #+#             */
/*   Updated: 2022/09/22 17:20:35 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "libft/libft.h"

int		clear_bit(int c, int position);
int		set_bit(int c, int position);
char	*add_char_to_str(char *message, char c);

#endif