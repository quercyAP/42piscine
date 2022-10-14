/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:12:03 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/18 19:51:13 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	alpha(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	return (0);
}

int	numeric(char str)
{
	if (str >= 48 && str <= 57)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (alpha(str[i]) || !numeric(str[i]))
		{
			i++;
			k++;
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		k = i - k;
		if (str[k] >= 97 && str[k] <= 122 && numeric(str[k - 1]))
		{
			str[k] -= 32;
		}
		i++;
	}
	return (str);
}
