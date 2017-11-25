/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:20:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 11:54:02 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[j] != '\0')
		j++;
	if (j < start)
		return (NULL);
	j = 0;
	while (j < len)
		c[j++] = s[i++];
	c[j] = '\0';
	return (c);
}
