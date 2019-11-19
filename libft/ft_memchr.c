/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:54:48 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 01:38:08 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;

	while (n > 0)
	{
		ptr = (unsigned char *)s;
		if (*ptr == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
