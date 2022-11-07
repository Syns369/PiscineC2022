/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:44:57 by jsabound          #+#    #+#             */
/*   Updated: 2022/07/17 17:04:00 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_tab(int str[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i > 0 && i < 5)
	{
		j = 1;
		while (j < 5)
		{	
			ft_putchar(str[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
