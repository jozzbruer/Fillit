/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 19:43:42 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 00:39:54 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*p;
	int		i;

	i = 0;
	if ((p = (char *)malloc(sizeof(char) * size)))
	{
		while (i < (int)size)
		{
			p[i] = 0;
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}
