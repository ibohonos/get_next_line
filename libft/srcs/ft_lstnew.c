/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:41:18 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 14:54:01 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *c;

	c = (t_list *)malloc(sizeof(t_list) * 1);
	if (c == NULL)
		return (NULL);
	if (!content)
	{
		c->content = NULL;
		c->content_size = 0;
	}
	else
	{
		c->content = (void *)malloc(sizeof(void) * content_size);
		if (c->content == NULL)
		{
			free(c);
			return (NULL);
		}
		ft_memcpy(c->content, content, content_size);
		c->content_size = content_size;
	}
	c->next = NULL;
	return (c);
}
