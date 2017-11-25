/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:03:27 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 11:56:14 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			j++;
		i++;
	}
	if (s[0] != '\0')
		j++;
	return (j);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		j;

	s = (char *)malloc(sizeof(char) * ft_strlen(str));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (str[*i] != c && str[*i])
	{
		s[j] = str[*i];
		j++;
		*i += 1;
	}
	s[j] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		w;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	w = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char **) * (w + 2));
	if (str == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (j < w && s[i] != '\0')
		str[j++] = ft_word(s, c, &i);
	str[j] = NULL;
	return (str);
}
