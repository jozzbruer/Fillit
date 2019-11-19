/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:49:20 by jquince           #+#    #+#             */
/*   Updated: 2019/10/11 15:39:43 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, int lenght)
{
	int		dlen;
	int		slen;
	int		i;
	int		j;

	dlen = ft_strnlen(dst, lenght);
	slen = ft_strlen(src);
	if (dlen < lenght)
	{
		i = 0;
		j = dlen;
		while (j < lenght && i < slen)
			dst[j++] = src[i++];
		if (j < lenght)
			dst[j] = '\0';
		else
			dst[lenght - 1] = '\0';
	}
	return (dlen + slen);
}
