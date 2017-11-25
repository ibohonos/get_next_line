/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 15:58:10 by ibohonos          #+#    #+#             */
/*   Updated: 2017/10/25 15:58:12 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;

	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1 != '\0')
	{
		i = 0;
		while (*(str1 + i) == *(str2 + i))
			if (*(str2 + i + 1) == '\0')
				return ((char *)str1);
			else if (*(str1 + i++) == '\0')
				return (0);
		str1++;
	}
	return (NULL);
}
