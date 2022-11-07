/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:52:15 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/14 12:47:42 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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

/*int	main(void)
{
	char	dest[] = "oui";
	char	src[] = "non";
	printf("%s", dest);
	printf("\n%s", ft_strcat(dest, src));
}*/
