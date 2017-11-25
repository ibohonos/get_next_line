/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:42:09 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 11:25:31 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*c;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	c = (char *)malloc(sizeof(char) * i + 1);
	if (c == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		c[i] = f(s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
