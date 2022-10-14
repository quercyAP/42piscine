/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <glamazer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:02:16 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/19 08:25:42 by glamazer         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	strlen;
	int	i;

	i = 0;
	strlen = ft_strlen(str);
	if (strlen == 0)
		return (1);
	while (i < strlen)
	{
		if (str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}
