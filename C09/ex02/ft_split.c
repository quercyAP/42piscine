/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:46:06 by glamazer          #+#    #+#             */
/*   Updated: 2022/08/01 16:19:01 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	foundcharset(char *str, char *charset, int i);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	countstring(char *str, char *charset)
{
	int	i;
	int	j;
	int	strcount;
	int	found;

	i = 0;
	strcount = 0;
	while (i < ft_strlen(str))
	{
		if (i != foundcharset(str, charset, i))
		{
			i = foundcharset(str, charset, i);
			i += ft_strlen(charset);
			strcount++;
		}
		else
			i += ft_strlen(charset);
	}
	return (strcount);
}

int	foundcharset(char *str, char *charset, int i)
{
	int	j;

	while (str[i])
	{
		j = 0;
		while (charset[j] == str[i] && charset[j] && str[i])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(charset))
			return (i - j);
		i++;
	}
	return (i - j);
}

void	copy(char *str, char *charset, char **strs)
{
	int	j;
	int	found;
	int	i;
	int	k;

	k = 0;
	i = 0;
	found = foundcharset(str, charset, i);
	while (k < countstring(str, charset))
	{
		j = 0;
		if (i != found)
		{
			strs[k] = (char *)malloc(sizeof(char) * found - i);
			while (i < found && str[i])
			{
				strs[k][j] = str[i++];
				j++;
			}
			strs[k++][j] = '\0';
		}
		i = i + ft_strlen(charset);
		found = foundcharset(str, charset, i);
	}
	strs[countstring(str, charset)] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;

	strs = (char **)malloc((sizeof(str) * countstring(str, charset)) + 1);
	if (strs == 0)
		return (0);
	copy(str, charset, strs);
	return (strs);
}
