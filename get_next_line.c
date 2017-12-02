/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:43:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/02 10:38:58 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_join_str(char *str, int fd)
{
	int		rf;
	char	buf[BUFF_SIZE + 1];
	char	*file;

	while ((rf = read(fd, buf, BUFF_SIZE)) > 0)
	{
		file = str;
		buf[rf] = '\0';
		str = ft_strjoin(str, buf);
		free(file);
	}
	if (rf == -1)
		return (NULL);
	return (str);
}

static void	ft_join_line(char *str, char **line)
{
	if (ft_strchr(str, '\n'))
		*line = ft_strsub(str, 0, ft_strchr(str, '\n') - str);
	else
		*line = ft_strdup(str);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str[4096];

	if (!line || fd < 0 || fd > 4096 || BUFF_SIZE < 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(1);
	if (!str[fd])
		return (-1);
	str[fd] = ft_join_str(str[fd], fd);
	if (!str[fd])
		return (-1);
	ft_join_line(str[fd], line);
	if (ft_strchr(str[fd], '\n'))
		str[fd] = ft_strsub(str[fd], ft_strchr(str[fd], '\n') - str[fd] + 1,
				ft_strlen(str[fd]));
	else
		ft_strdel(&str[fd]);
	if (!str[fd] && ft_strlen(*line) == 0)
		return (0);
	return (1);
}
