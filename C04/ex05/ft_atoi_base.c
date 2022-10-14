/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:42:05 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/26 18:44:17 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	parcour(char *str, int i)
{
	int	space;
	int	j;

	space = 0;
	j = -1;
	while (str[++j])
	{
		while (str[i] == '-' || str[i] == '+')
		{
			i++;
			j++;
			space = 1;
		}
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		{
			if (space == 1)
				return (-1);
			i++;
			j++;
		}
		j++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	erreur(char *base)
{
	int	blen;
	int	i;

	i = 0;
	blen = ft_strlen(base);
	if (blen < 2)
		return (0);
	while (base[i])
	{
		if (base[i - 1] == base[i] || base[i] == base[i + 1])
			return (0);
		else if (base[i] < 33 || base[i] > 122
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	check(char c, char *base, char *str, int k)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (k == 1)
	{
		while (base[++i])
		{
			if (base[i] == c)
				return (i);
		}
		return (i);
	}
	else
	{
		while (str[++i])
		{
			if (str[i] == '-')
				j++;
		}
		if (j % 2 == 0)
			return (j);
		return (j *= -1);
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	index = 0;
	if (parcour(str, i) == -1)
		return (0);
	else
		i = parcour(str, i);
	if (erreur(base))
	{
		while (index < ft_strlen(base))
		{
			nb = (nb * ft_strlen(base)) + index;
			index = check(str[i++], base, str, 1);
		}
	}
	if (check('c', base, str, 2) < 0)
		return (nb *= -1);
	return (nb);
}
