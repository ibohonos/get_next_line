/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:48:43 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 11:28:10 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

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
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
