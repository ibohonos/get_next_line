/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 22:55:34 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/06 19:54:53 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*t;

	i = 0;
	while (s[i] != '\0')
		i++;
	t = (char *)malloc(sizeof(char) * i + 1);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
