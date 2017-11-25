/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 23:24:36 by ibohonos          #+#    #+#             */
/*   Updated: 2017/10/24 23:24:38 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
		dest[l++] = src[i++];
	dest[l] = '\0';
	return (dest);
}
