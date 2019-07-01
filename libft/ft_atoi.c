/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:10:12 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 13:55:46 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (ft_skipchar(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		if (str[i] == '2' && str[i + 1] == '1' && str[i + 2] == '4' &&
				str[i + 3] == '7' && str[i + 4] == '4' && str[i + 5] == '8' &&
				str[i + 6] == '3' && str[i + 7] == '6' && str[i + 8] == '4' &&
				str[i + 9] == '8')
			return (-2147483648);
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
