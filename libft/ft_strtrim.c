/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:43:09 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/16 20:48:06 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		o;
	int		l;

	i = 0;
	l = 0;
	if (s)
	{
		o = ft_strlen(s) - 1;
		while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		while ((o > i) && (s[o] == ' ' || s[o] == '\t' || s[o] == '\n'))
			o--;
		if ((o - i) > 1)
			l = (o - i + 1);
		else
			l = 1;
		str = ft_strsub(s, i, l);
		return (str);
	}
	return (NULL);
}
