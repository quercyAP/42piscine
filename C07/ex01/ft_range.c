/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:25:58 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/27 17:21:55 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;

	j = 0;
	if (min < max)
	{
		i = max - min;
		array = malloc(sizeof(*array) * i);
		if (array == 0)
			return (0);
		while (i > 0)
		{
			array[j] = min;
			min++;
			i--;
			j++;
		}
		return (array);
	}
	else
		return (0);
}
