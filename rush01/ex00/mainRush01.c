/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainRush01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-rouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:44:53 by ele-rouz          #+#    #+#             */
/*   Updated: 2022/07/17 23:00:35 by ele-rouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_arg(char *argv);
int	ft_input(char *str);

void	error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	if (argc == 1 || argc != 2 || check_arg(argv[1]) == 0)
	{
		error();
		return (0);
	}
	else
		write(1, "INPUT IS OK", 12);
	ft_input(argv[1]);
	return (0);
}
