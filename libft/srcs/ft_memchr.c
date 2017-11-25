/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 21:46:11 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 17:53:32 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*t;

	t = (char *)s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (char)c)
			return (&t[i]);
		i++;
	}
	return (NULL);
}
