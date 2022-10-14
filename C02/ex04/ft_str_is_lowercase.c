/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:32:54 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/18 17:30:24 by glamazer         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	strlen;
	int	i;

	i = 0;
	strlen = ft_strlen(str);
	if (strlen == 0)
		return (1);
	while (i < strlen)
	{
		if ((str[i] > 31 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
