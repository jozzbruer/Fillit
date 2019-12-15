/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 15:39:12 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:39:48 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*src;
	char	*dst;
	size_t	i;
	size_t	o;

	src = (char *)s2;
	dst = s1;
	i = 0;
	o = 0;
	while (dst[i])
	{
		i++;
	}
	while (src[o] && o < n)
	{
		dst[i] = src[o];
		o++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
