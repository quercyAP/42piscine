/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:40:57 by glamazer          #+#    #+#             */
/*   Updated: 2022/08/01 10:51:02 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	sl2(char **str, int size)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (str[i][len])
		{
				len++;
				j++;
		}
		len = 0;
		i++;
	}
	return (j);
}

int	sl(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	concat(char **strs, char *sep, int size, char *join)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 0;
	while (++i < size)
	{
		while (strs[i][j])
		{
			join[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			join[k] = sep[j];
			k++;
			j++;
		}
		j = 0;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	char	*join;
	int		strl;
	int		strsl;

	strl = sl(sep) * (size - 1);
	strsl = sl2(strs, size);
	if (size == 0)
	{
		join = (char *)malloc(1);
		return (join);
	}
	join = (char *)malloc(sizeof(*sep) * strsl + strl);
	if (join == 0)
		return (0);
	concat(strs, sep, size, join);
	k = sl(join);
	join[k] = '\0';
	return (join);
}
