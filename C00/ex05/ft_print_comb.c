/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:14:30 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/07 17:02:50 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	multi_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				multi_putchar(x + 48, y + 48, z + 48);
				if (x < 7)
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
