/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:18:18 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:52:23 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countw(char const *s, char c)
{
	size_t	len;
	size_t	singlec;

	singlec = 0;
	len = 0;
	if (s)
	{
		while (len < ft_strlen(s))
		{
			if (len == 0 && s[len] != c)
				singlec++;
			if (s[len] == c && s[len + 1] != c && s[len + 1] != '\0')
				singlec++;
			len++;
		}
		return (singlec);
	}
	return (0);
}
