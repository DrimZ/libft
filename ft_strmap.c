/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:16:30 by qle-bevi          #+#    #+#             */
/*   Updated: 2015/11/29 23:16:59 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	while (*s)
	{
		str[i++] = (*f)(*(s++));
	}
	return (str);
}
