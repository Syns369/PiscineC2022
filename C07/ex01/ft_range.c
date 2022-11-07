/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:23:57 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/27 18:23:48 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	tab = malloc(len * sizeof(*tab));
	if (tab == NULL)
		return (0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
