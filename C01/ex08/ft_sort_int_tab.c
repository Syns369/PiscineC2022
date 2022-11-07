/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:59:54 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/09 18:52:13 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	memory;

	i = 0;
	memory = 0;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
			{
				memory = tab[i];
				tab[i] = tab[y];
				tab[y] = memory;
			}
			y++;
		}
		i++;
	}
}
