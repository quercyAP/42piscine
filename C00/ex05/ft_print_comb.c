/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:30:11 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/14 08:26:13 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1 ;
			while (c <= '9')
			{
				ft_put_comb(a, b, c);
				c++;
				if (a != '7')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
