/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:54:14 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/30 16:40:18 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	j;

	j = 0;
	if (min < max)
	{
		i = max - min;
		array = malloc((i) * (max - min));
		if (array == 0)
			return (-1);
		while (i > 0)
		{
			array[j] = min;
			min++;
			i--;
			j++;
		}
		*range = array;
		return (j);
	}
	else
		*range = 0;
	return (0);
}
