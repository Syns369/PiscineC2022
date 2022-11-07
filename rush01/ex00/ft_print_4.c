/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:04:45 by jsabound          #+#    #+#             */
/*   Updated: 2022/07/17 17:01:08 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_4(int tab[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		if (tab [i][0] == 1)
			tab[i][1] = 4;
		if (tab [i][5] == 1)
			tab[i][4] = 4;
		i++;
	}
	j = 1;
	while (j < 5)
	{
		if (tab[0][j] == 1)
			tab [1][j] = 4;
		if (tab[5][j] == 1)
			tab [4][j] = 4;
		j++;
	}
}

#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void    ft_print_tab(int str[6][6])
{
        int     i;
        int     j;

        i = 1;
        while (i > 0 && i < 5)
        {
                j = 1;
                while (j < 5)
                {
                        ft_putchar(str[i][j] + '0');
                        ft_putchar(' ');
                        j++;
                }
                ft_putchar('\n');
                i++;
        }
}

int     main (void)
{
        int     tab[6][6] ={{1, 1, 1, 1, 1, 1},
                            {1, 2, 3, 3, 5, 1},
                            {1, 2, 3, 3, 5, 1},
                            {1, 2, 3, 3, 5, 1},
                            {1, 2, 3, 3, 5, 1},
                            {1, 1, 1, 1, 1, 1}};
	ft_print_4(tab);
        ft_print_tab(tab);
}

