/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:08:02 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 10:27:34 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (*p1 == '\0')
		return (*p1 - *p2);
	i = 0;
	while ((*p1 && i < n) || (*p2 && i < n))
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
			return (*p1 - *p2);
		i++;
	}
	return (0);
}
