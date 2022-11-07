/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <jdarcour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:49:23 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/27 22:22:19 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	countwords(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && (is_charset(str[i + 1], charset)
				|| str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	fill_words(char *bigtab, char *str, int lword)
{
	int	i;

	i = 0;
	while (i < lword)
	{
		bigtab[i] = str[i];
		i++;
	}
	bigtab[i] = '\0';
}

int	malloc_words(char **bigtab, char *str, char *charset)
{
	int		i;
	int		j;
	int		w;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && is_charset(str[i], charset) == 0)
		{
			w = 0;
			while (str[i + w] && is_charset(str[i + w], charset) == 0)
				w++;
			bigtab[j] = malloc(sizeof(char) * (w + 1));
			if (bigtab[j] == NULL)
				return (0);
			fill_words(bigtab[j], &str[i], w);
			j++;
			i += w;
		}
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	char	**bigtab;

	wordcount = countwords(str, charset) + 1;
	bigtab = malloc(sizeof(char *) * wordcount);
	if (bigtab == NULL)
		return (0);
	if (malloc_words(bigtab, str, charset) == 0)
		return (0);
	bigtab[wordcount - 1] = 0;
	return (bigtab);
}
