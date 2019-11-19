/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:39:37 by jquince           #+#    #+#             */
/*   Updated: 2019/10/09 16:35:20 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*foo;
	t_list			*bar;

	if (alst != NULL)
	{
		foo = *alst;
		while (foo != NULL)
		{
			if (del != NULL)
				(*del)(foo->content, (*foo).content_size);
			bar = foo->next;
			free(foo);
			foo = bar;
		}
		*alst = NULL;
	}
}
