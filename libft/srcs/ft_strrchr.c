/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 15:37:33 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 21:22:13 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (*s == '\0')
		return (NULL);
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i-- >= 0)
	{
		if (*s != (char)c)
			s--;
		else
			return ((char *)s);
	}
	return (NULL);
}
