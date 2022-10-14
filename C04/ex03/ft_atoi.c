/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:23:44 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/26 18:38:48 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == '-')
			j++;
	}
	if (j % 2 == 0)
		return (j);
	return (j *= -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (parcour(str, i) == -1)
		return (0);
	else
		i = parcour(str, i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (check(str) < 0)
		return (nb *= -1);
	return (nb);
}
