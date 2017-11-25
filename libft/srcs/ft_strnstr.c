/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:07:01 by ibohonos          #+#    #+#             */
/*   Updated: 2017/10/25 18:07:03 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	z;
	int		l;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	while (i < len && *str1 != '\0')
	{
		l = 0;
		z = i;
		while (z < len && *(str1 + l) == *(str2 + l))
		{
			if (*(str2 + l + 1) == '\0')
				return ((char *)str1);
			else if (*(str1 + l++) == '\0')
				return (NULL);
			z++;
		}
		str1++;
		i++;
	}
	return (NULL);
}
