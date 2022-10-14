/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:53:16 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/18 20:45:53 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (str[i] < 31 && str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[17] = "0123456789abcdef";
	int		i;

	i = 0;
	if (ft_str_is_printable(str))
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		return;
	}
	while (str[i] != '\0')
	{
		if (!ft_str_is_printable(str[i]))
		{
			ft_putchar('\\');
			ft_putchar(hex[str[i]] / 16);
			ft_putchar(hex[str[i]] % 16);
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	printf("%s", ft_putstr_non_printable(str));
}
