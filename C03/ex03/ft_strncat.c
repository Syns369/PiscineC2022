/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:45:25 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/14 14:12:27 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
			i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	dest_len = str_len(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
