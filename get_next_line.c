/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:43:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/28 16:55:08 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	int			ret;
	char		*rm;
	char		buffer[BUFF_SIZE + 1];
	static char	*s[2147483648];

	if (!line || fd < 0 || !(s[fd] = !s[fd] ? ft_strnew(1) : s[fd]))
		return (-1);
	while (!ft_strchr(s[fd], '\n') && (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		rm = s[fd];
		buffer[ret] = '\0';
		s[fd] = ft_strjoin(s[fd], buffer);
		free(rm);
	}
	if (ret == -1)
		return (-1);
	*line = (ft_strchr(s[fd], '\n') ? ft_strsub(s[fd], 0,
				ft_strchr(s[fd], '\n') - s[fd]) : ft_strdup(s[fd]));
	if (ft_strchr((rm = s[fd]), '\n'))
		s[fd] = ft_strsub(s[fd], ft_strchr(s[fd], '\n') - s[fd] + 1,
				ft_strlen(s[fd]));
	else
		ft_strdel(&s[fd]);
	free(rm);
	return (!s[fd] && ft_strlen(*line) == 0 ? 0 : 1);
}
