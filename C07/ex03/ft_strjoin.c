/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:43:42 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/27 23:18:11 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
	{
		i_dest++;
	}
	while (src[i_src] != '\0')
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dest[i_dest + i_src] = '\0';
	return (dest);
}

int	fullsize(int size, char **strs, char *sep)
{
	int	sepsize;
	int	fullsize;
	int	i;

	sepsize = ft_strlen(sep) * (size - 1);
	fullsize = 0;
	i = 0;
	while (i < size)
	{
		fullsize += ft_strlen(strs[i]);
		i++;
	}
	fullsize += sepsize + 1;
	return (fullsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		fsize;
	char	*tab;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	fsize = fullsize(size, strs, sep);
	tab = malloc(fsize * sizeof(char));
	if (tab == NULL)
		return (0);
	tab[0] = '\0';
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
