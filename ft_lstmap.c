/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:16:27 by qle-bevi          #+#    #+#             */
/*   Updated: 2015/11/29 23:16:56 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(lst->content, lst->content_size);
	if (!new)
		return (NULL);
	new = (*f)(new);
	while (lst->next)
	{
		lst = lst->next;
		current = ft_lstnew(lst->content, lst->content_size);
		if (!current)
			return (NULL);
		ft_lstpush(new, (*f)(current));
	}
	return (new);
}
