/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:08:44 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/09 14:41:15 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char first, char middle, char last, int size_x)
{
	ft_putchar(first);
	while (size_x > 2)
	{
		size_x--;
		ft_putchar(middle);
	}
	if (size_x >= 2)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int size_x, int size_y)
{
	if (size_x > 0 || size_y > 0)
	{
		print_line('o', '-', 'o', size_x);
		while (size_y > 2)
		{
			print_line('|', ' ', '|', size_x);
			size_y--;
		}
		if (size_y >= 2)
			print_line('o', '-', 'o', size_x);
	}
}
