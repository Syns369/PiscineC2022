/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:00:30 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/22 14:25:24 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm') )
				argv[1][i] += 13;
			else if((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n' && argv[1][i] <= 'z') )
				argv[1][i] -= 13;
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
