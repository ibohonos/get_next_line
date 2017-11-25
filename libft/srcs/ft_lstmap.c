/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 15:16:32 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 14:42:46 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n;

	if (lst != NULL && f != NULL)
	{
		n = f(lst);
		if (n != NULL && lst->next != NULL)
			n->next = ft_lstmap(lst->next, f);
		return (n);
	}
	return (NULL);
}
