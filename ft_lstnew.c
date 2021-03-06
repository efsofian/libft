/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:09:24 by seliasbe          #+#    #+#             */
/*   Updated: 2016/11/29 16:29:03 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content)
	{
		if ((new->content = (void *)malloc(content_size)) == NULL)
			return (NULL);
		new->content = ft_memmove(new->content, content, content_size);
	}
	else
		new->content = NULL;
	new->content_size = !content ? 0 : content_size;
	new->next = NULL;
	return (new);
}
