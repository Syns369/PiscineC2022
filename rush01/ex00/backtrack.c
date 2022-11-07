/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:20:13 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/17 23:38:14 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_possible_x(int k, int i, int **tab)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tab[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int	is_possible_y(int k, int j, int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int	check_lines_g_d(int i, int j, int **tab)
{
	int	digit;
	int	count;
	int	maxval;
	int clues[] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};

	count = 1;
	digit = clues[8] + i;
	maxval = tab[i][j];
	while (j < 4)
	{
		if (maxval < tab[i][j])
		{
			count++;
			maxval = tab[i][j];
		}
		j++;
	}
	if (count == digit)
		return (1);
	else
		return (0);
}

int	check_lines_d_g(int i, int j, int **tab)
{
	int	digit;
	int	count;
	int	maxval;
	int clues[] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};

	count = 1;
	digit = clues[11] + i;
	maxval = tab[i][j];
	while (j > 0)
	{
		if (maxval < tab[i][j])
		{
			count++;
			maxval = tab[i][j];
		}
		j--;
	}
	if (count == digit)
		return (1);
	else
		return (0);
}

int	check_col_h_b(int i, int j, int **tab)
{
	int	digit;
	int	count;
	int	maxval;
	int clues[] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};
	count = 1;
	digit = clues[0] + j;
	maxval = tab[i][j];

	while (i < 3)
	{
		if (maxval < tab[i][j])
		{
			count++;
			maxval = tab[i][j];
		}
		i++;
	}
	if (count == digit)
		return (1);
	else
		return (0);
}


int	back_track(int **tab, int position)
{
	int	i;
	int	j;
	int	k;
	
	if (position == 4*4)
	{
	//	if (check_lines_g_d(0, 0, tab) && check_lines_d_g(0, 3, tab))
	//	if (check_col_h_b(0, 0, tab))
		return (1);
	}
	k = 1;
	i = position / 4;
	j = position % 4;
	if (tab[i][j] != 0)
		return (back_track(tab, position + 1));
	while (k <= 4)
	{
		if (is_possible_x(k, i, tab) && is_possible_y(k, j, tab))
		{
			tab[i][j] = k;
		/*	if(check_line == 0 || check_colone == 0)
			{
				tab[i][j] = 0;
				return (0);
			}*/
			if (back_track(tab, position + 1))
				return (1);
		}
		k++;
	}
	tab[i][j] = 0;
	return (0);
}

void	print(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int	main()
{
	int	i;
	int	j;
	int **tab = malloc (4 * sizeof(int	*));

	i = 0;
	j = 0;
	while (i < 4)
	{
		tab[i] = malloc (4 * sizeof(int));
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	back_track(tab, 0);
	print(tab);
	return (0);
}
