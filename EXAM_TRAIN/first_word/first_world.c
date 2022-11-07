/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:52:27 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/22 13:28:44 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_alpha(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (!is_alpha(argv[1][i]) && argv[1][i])
			i++;
		while (argv[1][i] && is_alpha(argv[1][i]))
		{
			write(1, "y", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
