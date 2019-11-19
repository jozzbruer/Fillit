/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:50:29 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 20:37:53 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*n)
		return ((char*)h);
	while (h[i] != '\0' && i + len)
	{
		j = 0;
		while (n[j] == h[i + j] && i + j < len)
		{
			if (n[j++ + 1] == '\0')
				return ((char*)h + i);
		}
		i++;
	}
	return (0);
}
