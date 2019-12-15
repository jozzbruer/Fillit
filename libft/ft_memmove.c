/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 22:42:55 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/16 20:45:43 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src1;
	unsigned char	*dst1;
	size_t			l;

	if (!dst && !src)
		return (NULL);
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (src1 < dst1)
	{
		l = len;
		while (l--)
			dst1[l] = src1[l];
	}
	else
	{
		l = 0;
		while (l < len)
		{
			dst1[l] = src1[l];
			l++;
		}
	}
	return (dst1);
}
