/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <glamazer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:30:58 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/19 08:52:38 by glamazer         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	srclen;
	int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	while (i < srclen)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
