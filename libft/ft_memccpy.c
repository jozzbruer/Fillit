/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:08:15 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 20:11:33 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		(((unsigned char *)dest)[i]) = (((unsigned char *)src)[i]);
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (&((unsigned char *)dest)[i + 1]);
		i++;
	}
	return (NULL);
}
