/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:18:15 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 10:50:41 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_delimiter(char temp)
{
	if ((temp >= 9 && temp <= 13) || temp == 32)
		return (1);
	return (0);
}

static	int	is_min_max(const char *nbr, int minus)
{
	int i;

	i = 0;
	while ((nbr[i] >= '0' && nbr[i] <= '9') || nbr[i] == '-' || nbr[i] == '+')
		i++;
	if (minus)
		i--;
	if (i > 19)
	{
		if (minus)
			return (0);
		return (1);
	}
	else if (i == 19)
	{
		if (minus && ft_strcmp(nbr, "-9223372036854775807") > 0)
			return (0);
		if (ft_strcmp(nbr, "9223372036854775807") > 0)
			return (1);
	}
	return (2);
}

int			ft_atoi(const char *nptr)
{
	int minus;
	int number;

	minus = 0;
	number = 0;
	while (is_delimiter(*nptr))
		nptr++;
	if (*nptr == '-')
		minus = 1;
	if (is_min_max(nptr, minus) == 0)
		return (0);
	else if (is_min_max(nptr, minus) == 1)
		return (-1);
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		number *= 10;
		number += (int)(*nptr - '0');
		nptr++;
	}
	if (minus)
		number = -number;
	return (number);
}
