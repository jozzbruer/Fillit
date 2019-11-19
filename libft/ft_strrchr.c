/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:37:40 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 19:08:21 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(char const *s, int c)
{
	int		i;
	char	ch;

	ch = c;
	i = ft_strlen(s);
	while (s[i] != ch)
	{
		if ((i == 0) && (s[i] != ch))
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}
