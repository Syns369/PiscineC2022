/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:02:53 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/28 23:27:01 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	is_charset(char c)
{
	if (c == 32 || c == 10 || c == 9 || c == 0)
		return (1);
	return (0);
}

int	countwords(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_charset(str[i]) && is_charset(str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

void	ft_strcpy(char *tab, char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
}

int	fillwords(char *str, char **new)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_charset(str[i]))
			i++;
		if (str[i] && !is_charset(str[i]))
		{
			w = 0;
			while (str[i + w] && !is_charset(str[i + w]))
				w++;
			new[j] = malloc(sizeof(char) * (w + 1));
			if (new[j] == NULL)
				return (0);
			ft_strcpy(new[j], &str[i], w);
			j++;
			i += w;
		}
	}
	return (1);
}

char	**split(char *str)
{
	int		wordscount;
	char	**new;

	wordscount = countwords(str);
	new = malloc(sizeof(char *) * (wordscount + 1));
	if (new == NULL)
		return (0);
	new[wordscount] = 0;
	fillwords(str, new);
	return (new);

}

int main()
{
	int		i;
	char	**ptr;
	char	str[] = "oui ok cava salut	\noiuiuiii			ouaiiii";

	i = 0;
	ptr = split(str);
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}
