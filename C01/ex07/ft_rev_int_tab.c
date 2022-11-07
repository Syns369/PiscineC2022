/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:14:55 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/09 17:25:32 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	memory;

	i = 0;
	memory = 0;
	while (i < size)
	{
		memory = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = memory;
		size--;
		i++;
	}
}
