/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:38:30 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/11 16:16:25 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *src)
{
	int	incr;

	incr = 0;
	while (src[incr] != '\0')
	{
		incr++;
	}
	return (incr);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (str_len(src));
	}
	else
		return (str_len(src));
}
