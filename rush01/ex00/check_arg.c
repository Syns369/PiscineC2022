/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-rouz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:57:41 by ele-rouz          #+#    #+#             */
/*   Updated: 2022/07/17 23:02:13 by ele-rouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	nbr_after_space(char *argv)
{
	int	i;

	i = 0;
	while (argv[i + 1])
	{
		if (argv[i] == ' ')
		{
			if (argv[i + 1] < '1' || argv[i + 1] > '4')
				return (0);
		}
		if (argv[i] >= '1' && argv[i] <= '4')
		{
			if (argv[i +1] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_arg(char *argv)
{
	int	i;

	i = 0;
	if (ft_strlen(argv) != 31)
		return (0);
	if (argv[i] == ' ')
		return (0);
	if (nbr_after_space(argv) == 0)
		return (0);
	i = 0;
	while (argv[i])
	{
		if (argv[i] < '1' || argv[i] > '4' )
		{
			if (argv[i] != ' ')
				return (0);
		}
		i++;
	}
	if (argv[i -1] == ' ')
		return (0);
	return (1);
}
