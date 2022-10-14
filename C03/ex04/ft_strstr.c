/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:06:22 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/20 15:11:35 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] != '\0')
			j = 0;
		else
			return (str + i - j);
	i++;
	}
	return (0);
}
