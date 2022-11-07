/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:14:30 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/07 21:41:15 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	multi_putchar(int x, int y)
{
	ft_putchar((x / 10) + 48);
	ft_putchar((x % 10) + 48);
	ft_putchar(' ');
	ft_putchar((y / 10) + 48);
	ft_putchar((y % 10) + 48);
	if (x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			multi_putchar(x, y);
			y++;
		}
		x++;
	}
}
