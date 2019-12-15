/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:28:11 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:01:18 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int o;

	o = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[o] != '\0')
	{
		i = 0;
		if (haystack[o] == needle[i])
		{
			while (haystack[o + i] == needle[i] && needle[i] != '\0')
			{
				if (haystack[o + i] != needle[i])
					break ;
				i++;
			}
			if (needle[i] == '\0')
				return (&haystack[o]);
		}
		o++;
	}
	return (NULL);
}
