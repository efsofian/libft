/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 00:06:56 by seliasbe          #+#    #+#             */
/*   Updated: 2016/11/20 00:11:54 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *new;

	new = NULL;
	while (*s)
	{
		if (*s == (char)c)
			new = (char *)s;
		s++;
	}
	if (*s == (char)c)
		new = (char *)s;
	return (new);
}
