/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 22:09:26 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 02:03:53 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		ch;

	i = 0;
	ch = c;
	while (s[i] != ch)
	{
		if ((ft_strlen(s) == i) && (s[i] != ch))
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
