/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:29:24 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/26 13:41:15 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	i = 0;
	j = 0;
	len_base = str_len(base);
	if (str_len(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] < 32 || base[i] > 126)
			return (0);
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = str_len(base);
	if (check_base(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2147483648 / base_len, base);
		ft_putnbr_base(2147483648 % base_len, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= 0 && nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
}
