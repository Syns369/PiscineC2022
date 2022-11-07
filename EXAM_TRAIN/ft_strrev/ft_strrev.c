/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:37:30 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/22 13:59:43 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		str_len;
	char	temp;

	i = 0;
	str_len = ft_strlen(str) - 1;
	while (str_len > i)
	{
		temp = str[i];
		str[i] = str[str_len];
		str[str_len] = temp;
		i++;
		str_len--;
	}
	return (str);
}

int	main()
{
	char	str[] = "salut ca va";
	ft_strrev(str);
	printf("%s", str);
}
