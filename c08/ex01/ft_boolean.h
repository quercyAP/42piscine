/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamazer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:13 by glamazer          #+#    #+#             */
/*   Updated: 2022/07/31 10:10:06 by glamazer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include<unistd.h>

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN(nbr) nbr % 2 == 0
# define EVEN_MSG "I have an even number of argument.\n"
# define ODD_MSG "I have an odd number of argument.\n"
# define SUCCESS 0

#endif
