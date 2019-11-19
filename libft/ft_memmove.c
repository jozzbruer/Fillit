/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:23:31 by jquince           #+#    #+#             */
/*   Updated: 2019/10/11 13:56:50 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char *s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s = src;
	if (dst > src)
	{
		i = len;
		while (i--)
		{
			d[i] = s[i];
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
