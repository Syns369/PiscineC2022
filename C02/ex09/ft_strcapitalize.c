/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:29:51 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/10 21:00:24 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

int	is_alpha(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	is_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha_num(char str)
{
	if (is_alpha(str) || is_num(str))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (is_alpha(str[0]))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!is_alpha_num(str[i - 1]) && is_alpha(str[i]))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
