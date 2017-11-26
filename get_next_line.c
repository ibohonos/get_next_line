/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:43:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/26 19:21:31 by ibohonos         ###   ########.fr       */
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

// static t_list	*ft_file_to_list(int fd, t_list **list)
// {
// 	t_list *lst;
//
// 	lst = *list;
// 	while (lst)
// 	{
// 		if ((int)lst->content_size == fd)
// 			return (lst);
// 		lst = lst->next;
// 	}
// 	lst = ft_lstnew("\0", fd);
// 	ft_lstadd(list, lst);
// 	lst = *list;
// 	return (lst);
// }
//
// int				get_next_line(const int fd, char **line)
// {
// 	static t_list	*list;
// 	char			buf[BUFF_SIZE + 1];
// 	// int				i;
// 	int				rf;
// 	t_list			*file;
//
// 	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0 ||
// 	(*line = ft_strnew(1)) == NULL)
// 		return (-1);
// 	file = ft_file_to_list(fd, &list);
// 	while ((rf = read(fd, buf, BUFF_SIZE)) != 0)
// 	{
// 		buf[rf] = '\0';
// 		file->content = ft_strcpy(file->content, buf);
// 		if (ft_strchr(buf, '\n'))
// 			break ;
// 	}
// 	if (rf < BUFF_SIZE && !ft_strlen(file->content))
// 		return (0);
// 	// i = ft_copyuntil(line, file->content, '\n');
// 	// if (i < (int)ft_strlen(file->content))
// 	// 	file->content += (i + 1);
// 	// else
// 	// 	ft_strclr(file->content);
// 	return (1);
// }

static t_list	*ft_set_list(t_list *list, int fd)
{
	char	*buf;
	int		rf;

	buf = ft_strnew(BUFF_SIZE + 1);
	if ((rf = read(fd, buf, BUFF_SIZE)) != 0)
	{
		list->content = (char *)malloc(sizeof(char) * rf);
		if (list->content == NULL)
			return (NULL);
		list->content = buf;
		list->content_size = rf;
		list->next = (t_list *)malloc(sizeof(t_list));
		if (list->next == NULL)
			return (NULL);
		list->next = ft_set_list(list->next, fd);
		return (list);
	}
	return (NULL);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*list;
	// int				i;
	// int				rf;

	if (fd < 0 || line == NULL || (list = (t_list *)malloc(sizeof(t_list))))
		return (-1);
	if ((list = ft_set_list(list, fd)) == NULL)
		return (-1);
	line = list->content;
	list = list->next;
	if (list == NULL)
		return (0);
	return (1);
}
