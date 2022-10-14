/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:56:55 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/16 16:39:52 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while(i <= y)
	{
		while(j <= x)
		{
			if ((i == 1 && j == 1) || (x > 1 && i == y && j == x && y > 1))
				ft_putchar('A');
			if ((x > 1 && j == x && i == 1) || (y > 1 && i == y && j == 1))
				ft_putchar('C');
			if (i > 1 && i < y && j > 1 && j < x)
				ft_putchar(' ');
			if ((j > 1 && j < x && i == 1) || (j > 1 && j < x && i == y))
				ft_putchar('B');
			if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
