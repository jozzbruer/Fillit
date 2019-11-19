/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:35:02 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 20:10:59 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *p;
	unsigned char *q;

	p = (unsigned char *)dest;
	q = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		*p++ = *q++;
	return (dest);
}
