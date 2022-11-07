/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdarcour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:08:53 by jdarcour          #+#    #+#             */
/*   Updated: 2022/07/13 14:12:02 by jdarcour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	temp;

	i = 0;
	while (str[i] != '\0')
	{
		temp = str[i];
		if (is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[temp / 16]);
			ft_putchar("0123456789abcdef"[temp % 16]);
		}
		i++;
	}
}

/*int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	printf("%s\n", "Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "Coucou tu vas bie\t\v\0nnnn";
	//printf("%s\n", "Coucou tu vas bie\t\v\0n");
	printf("%s", "\n");
	ft_putstr_non_printable(d);
}*/
