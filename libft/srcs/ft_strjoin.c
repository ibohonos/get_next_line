/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:49:43 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 11:55:24 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	a = (char *)malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		a[j++] = (char)s1[i++];
	i = 0;
	while (s2[i] != '\0')
		a[j++] = (char)s2[i++];
	a[j] = '\0';
	return (a);
}
