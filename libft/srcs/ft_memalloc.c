/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 14:50:36 by ibohonos          #+#    #+#             */
/*   Updated: 2017/10/27 14:50:41 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*c;
	size_t	i;

	if (size == 0)
		return (NULL);
	c = (char *)malloc(sizeof(char) * size);
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		c[i++] = 0;
	c[i] = '\0';
	return ((void *)c);
}
