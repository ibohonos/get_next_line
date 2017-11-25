/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 22:14:44 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 19:53:17 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] > d[i] || s[i] < d[i])
		{
			return (s[i] - d[i]);
		}
		else
			i++;
	}
	return (0);
}
