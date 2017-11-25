/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:43:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/25 20:01:34 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// static int		ft_copyuntil(char **dst, char *src, char c)
// {
// 	int		i;
// 	int		count;
// 	int		pos;
//
// 	i = -1;
// 	count = 0;
// 	while (src[++i])
// 		if (src[i] == c)
// 			break ;
// 	pos = i;
// 	if (!(*dst = ft_strnew(i)))
// 		return (0);
// 	while (src[count] && count < i)
// 	{
// 		if (!(*dst = ft_strjoin(*dst, src)))
// 			return (0);
// 		count++;
// 	}
// 	return (pos);
// }

static t_list	*ft_file_on_list(int fd, t_list **list)
{
	t_list *lst;

	lst = *list;
	while (lst)
	{
		if ((int)lst->content_size == fd)
			return (lst);
		lst = lst->next;
	}
	lst = ft_lstnew("\0", fd);
	ft_lstadd(list, lst);
	lst = *list;
	return (lst);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			buf[BUFF_SIZE + 1];
	// int				i;
	int				rf;
	t_list			*file;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0 ||
	(*line = ft_strnew(1)) == NULL)
		return (-1);
	file = ft_file_on_list(fd, &list);
	while ((rf = read(fd, buf, BUFF_SIZE)) != 0)
	{
		buf[rf] = '\0';
		file->content = ft_strcpy(file->content, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (rf < BUFF_SIZE && !ft_strlen(file->content))
		return (0);
	// i = ft_copyuntil(line, file->content, '\n');
	// if (i < (int)ft_strlen(file->content))
	// 	file->content += (i + 1);
	// else
	// 	ft_strclr(file->content);
	return (1);
}
