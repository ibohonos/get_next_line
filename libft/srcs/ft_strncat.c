/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 10:41:57 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 18:00:07 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (i < n && src[i] != '\0')
		dest[l++] = src[i++];
	dest[l] = '\0';
	return (dest);
}
