/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:23:59 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/20 18:39:06 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	erreur(char *base)
{
	unsigned int	blen;
	int				i;

	i = 0;
	blen = ft_strlen(base);
	if (blen < 2)
		return (0);
	while (base[i])
	{
		if (base[i - 1] == base[i] || base[i] == base[i + 1])
			return (0);
		else if (base [i] < 33 || base[i] > 122
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int			blen;
	unsigned int			nbl;

	nbl = nbr;
	blen = ft_strlen(base);
	if (erreur(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbl = nbr * -1;
		}
		if (nbl >= blen)
		{
			ft_putnbr_base(nbl / blen, base);
			ft_putnbr_base(nbl % blen, base);
		}
		else
		{
			ft_putchar(base[nbl]);
		}
	}
}
