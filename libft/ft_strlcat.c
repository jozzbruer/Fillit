/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 20:13:55 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/15 00:09:07 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (d > dstsize)
		return (dstsize + s);
	while (src[i] != '\0' && dstsize > (d + i + 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	if (dstsize > d + i)
		dst[d + i] = 0;
	return (d + s);
}
