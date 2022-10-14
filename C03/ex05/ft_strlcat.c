/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <glamazer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:19:39 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/20 11:28:14 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	while (i < srclen && i < size)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	if (size < destlen)
		return (size + srclen);
	return (destlen);
}
