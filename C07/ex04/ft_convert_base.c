/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:00:32 by glamazer          #+#    #+#             */
/*   Updated: 2022/08/01 16:01:22 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	parcour(char *str, int i);
int	ft_strlen(char *str);
int	erreur(char *base);
int	check(char c, char *base, char *str, int k);
int	ft_atoi_base(char *str, char *base);

int	reslen(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb >= 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

void	revswap(char *str, int len, int neg)
{
	int		i;
	char	tmp;

	i = -1;
	if (neg == 1)
	{
		str[len] = '-';
		len++;
	}
	while (++i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
	str[len] = '\0';
}

char	*itoc(char *res, int blen, int nb, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nb < 0)
	{
		nb *= -1;
		j = 1;
	}
	while (nb > 0)
	{
		res[i++] = base[nb % blen];
		nb = nb / blen;
	}
	if (nb == 0)
		res[i++] = 48;
	revswap(res, i, j);
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*res;

	nb = 0;
	res = "";
	nb = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(*res) * reslen(nb) + 1);
	if (res == 0)
		return (0);
	if (!erreur(base_to) || !erreur(base_from))
		return (0);
	res = itoc(res, ft_strlen(base_to), nb, base_to);
	return (res);
}
