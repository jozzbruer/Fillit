/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:56:01 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:04:45 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	int		o;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (n[0] == '\0')
		return ((char *)(haystack));
	while (h[i] != '\0' && i < len)
	{
		o = 0;
		if (h[i] == n[o] && n[o] != '\0')
		{
			while (h[i + o] == n[o] && (i + o) < len && n[o] && h[i + o])
			{
				o++;
				if (n[o] == '\0')
					return (&h[i]);
			}
		}
		i++;
	}
	return (NULL);
}
