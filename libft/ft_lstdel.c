/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:34:49 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/16 21:55:13 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *fre;

	node = *alst;
	while (node != NULL)
	{
		fre = node->next;
		(*del)(node->content, node->content_size);
		free(node);
		node = fre;
	}
	*alst = NULL;
}
