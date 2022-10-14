/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:42:35 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/25 09:01:22 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (n > 1)
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}
