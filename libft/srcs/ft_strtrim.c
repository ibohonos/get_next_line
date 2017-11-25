/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <ibohonos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:59:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/08 16:32:47 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_delim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*a;
	int		i;
	int		j;
	int		l;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_delim(s[i]) == 1)
		i++;
	j = ft_strlen((char *)s) - 1;
	while (ft_delim(s[j]) == 1)
		j--;
	l = j - i + 1;
	if (l < 0)
		return (ft_strdup(""));
	a = (char *)malloc(sizeof(char) * l + 1);
	if (a == NULL)
		return (NULL);
	j = 0;
	while (j < l)
		a[j++] = s[i++];
	a[j] = '\0';
	return (a);
}
