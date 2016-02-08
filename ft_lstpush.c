/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:16:27 by qle-bevi          #+#    #+#             */
/*   Updated: 2015/11/29 23:16:56 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **begin, void const *content, size_t content_size)
{
	t_list *new;
	t_list *curr;

	if (!begin || !(new = ft_lstnew(content, content_size)))
		return ;
	if (!(curr = *begin))
	{
		*begin = new;
		return ;
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}

void	ft_lstpush2(t_list **begin, t_list *new)
{
	t_list *curr;

	if (!*begin)
	{
		*begin = new;
		return ;
	}
	curr = *begin;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}
