/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 00:12:59 by seliasbe          #+#    #+#             */
/*   Updated: 2016/11/20 00:36:14 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int len;
	int len2;

	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (*s1 && len >= len2)
	{
		if (ft_strncmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
