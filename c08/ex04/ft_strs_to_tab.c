/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:11:29 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/31 15:06:41 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(t_stock_str *par);
void	pustr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	slen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	copy(int ac, char **av, t_stock_str *t_stock)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		t_stock[i].size = slen(av[i]);
		t_stock[i].str = (char *)malloc(sizeof(*av) * slen(av[i]));
		t_stock[i].copy = (char *)malloc(sizeof(*av) * slen(av[i]));
		j = 0;
		while (av[i][j])
		{
			t_stock[i].str[j] = av[i][j];
			t_stock[i].copy[j] = av[i][j];
			j++;
		}
		i++;
	}
	t_stock[ac + 1].str = 0;
	t_stock[ac + 1].copy = 0;
}

struct	s_stock_str	*ft_str_to_tab(int ac, char **av)
{
	t_stock_str	*t_stock;

	t_stock = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (t_stock == 0)
		return (t_stock);
	copy(ac, av, t_stock);
	return (t_stock);
}
