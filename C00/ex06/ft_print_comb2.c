/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:54:09 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/14 20:52:21 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10);
			ft_putchar(a % 10);
			ft_putchar(' ');
			ft_putchar(b / 10);
			ft_putchar(b % 10);
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}
