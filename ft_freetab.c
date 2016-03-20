/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 12:58:35 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/03/20 17:19:36 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_freetab(void **tab)
{
	int i;

	if (!tab || !*tab)
		return ;
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}