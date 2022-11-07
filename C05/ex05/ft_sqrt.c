/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:54:54 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/24 16:05:41 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb == 0)
		return (0);
	while (root * root != nb && root < 46340)
		root++;
	if (nb % root == 0)
		return (root);
	else
		return (0);
}
