/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:02:29 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/25 09:07:27 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;

	j = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= j;
		power--;
	}
	return (nb);
}
