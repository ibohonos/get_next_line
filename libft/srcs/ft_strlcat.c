/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 10:54:51 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 18:02:10 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*nd;
	const char	*ns;
	size_t		i;
	size_t		dlen;

	nd = dest;
	ns = src;
	i = size;
	while (i-- != 0 && *nd != '\0')
		nd++;
	dlen = nd - dest;
	i = size - dlen;
	if (i == 0)
		return (dlen + ft_strlen(ns));
	while (*ns != '\0')
	{
		if (i != 1)
		{
			*nd++ = *ns;
			i--;
		}
		ns++;
	}
	*nd = '\0';
	return (dlen + (ns - src));
}
