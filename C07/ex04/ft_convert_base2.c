/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:45:38 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/27 18:22:06 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>

int		str_len(char *base);
int		compute_sign(char *str, int *ptr_i);
int		check_base(char *base);
int		base_find(char c, char *base);
char	*ft_strcat(char *dest, char src);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	i = 0;
	sign = compute_sign(str, &i);
	result = 0;
	base_len = str_len(base);
	if (check_base(base) == 0)
		return (0);
	while (base_find(str[i], base) != -1)
	{
		result *= base_len;
		result += base_find(str[i], base);
		i++;
	}
	result *= sign;
	return (result);
}

void	ft_putnbr_base(int nbr, char *base_to, char *new)
{
	int			base_len;

	base_len = str_len(base_to);
	if (check_base(base_to) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_strcat(new, '-');
		ft_putnbr_base(2147483648 / base_len, base_to, new);
		ft_putnbr_base(2147483648 % base_len, base_to, new);
	}
	else if (nbr < 0)
	{
		ft_strcat(new, '-');
		ft_putnbr_base(-nbr, base_to, new);
	}
	else if (nbr >= 0 && nbr < base_len)
		ft_strcat(new, base_to[nbr]);
	else
	{
		ft_putnbr_base(nbr / base_len, base_to, new);
		ft_strcat(new, base_to[nbr % base_len]);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		out_atoi;
	char	*new;

	if (check_base(base_from) && check_base(base_to))
	{
		out_atoi = ft_atoi_base(nbr, base_from);
		new = malloc(sizeof(char) * 34);
		if (new == NULL)
			return (0);
		new[0] = '\0';
		ft_putnbr_base(out_atoi, base_to, new);
		return (new);
	}
	else
		return (NULL);
}
