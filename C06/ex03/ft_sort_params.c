/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:26:43 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/24 16:50:13 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s, char **s1 )
{
	char	*swap;

	swap = *s;
	*s = *s1;
	*s1 = swap;
}

void	ft_sort_str(char **c)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	while (c[i])
	{
		k = i + 1;
		while (c[k])
		{
			while (c[i][j] || c[k][j])
			{
				if (c[k][j] < c[i][j])
					ft_swap(&c[i], &c[k]);
				else if (c[i][j] == c[k][j])
					j++;
				else
					break ;
			}
			j = 0;
			k++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	(void) argc;
	i = 1;
	j = 0;
	ft_sort_str(argv);
	while (argv[i])
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}
