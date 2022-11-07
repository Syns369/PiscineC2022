/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:22:12 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/18 16:22:18 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	index = len_dest;
	j = 0;
	while (src[j] && index + 1 < size)
	{
		dest[index] = src[j];
		index++;
		j++;
	}
	dest[index] = '\0';
	if (size > len_dest)
	{
		return (len_dest + len_src);
	}
	else
	{
		return (len_src + size);
	}
}
