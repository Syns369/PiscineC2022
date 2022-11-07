/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:31:54 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/24 22:16:16 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	needle_index;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			needle_index = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[needle_index]);
				i++;
				j++;
			}
			i = needle_index;
		}
		i++;
	}
	return (0);
}
