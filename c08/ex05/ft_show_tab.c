/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:55:46 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/31 14:58:54 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<unistd.h>

void	putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].size != 0)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		putstr(par[i].str);
		write(1, "\n", 1);
		putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
