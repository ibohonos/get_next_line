/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:53:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 16:51:47 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_numb(int i, int minus)
{
	int		j;

	j = 1;
	if (minus == 1)
		j++;
	while (i > 9)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char		*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*a;

	minus = 0;
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_count_numb(n, minus);
	if ((a = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	a[i--] = '\0';
	while (n > 9)
	{
		a[i--] = (n % 10) + '0';
		n /= 10;
	}
	a[i] = n + '0';
	if (minus == 1)
		a[--i] = '-';
	return (a);
}
