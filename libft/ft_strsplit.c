/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 21:57:12 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 14:02:21 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char						**ft_strsplit(char const *s, char c)
{
	char					**foo;
	int						i;
	int						j;
	int						k;
	int						wn;

	i = 0;
	k = 0;
	if (!s || !(foo = (char **)malloc(sizeof(char *) * (ft_wn(s, c) + 1))))
		return (NULL);
	wn = ft_wn(s, c);
	while (i < wn)
	{
		j = 0;
		if (!(foo[i] = (char *)malloc(sizeof(char) * (ft_len(&s[k], c) + 1))))
			return (NULL);
		while (s[k] == c)
			k++;
		while (s[k] && s[k] != c)
			foo[i][j++] = s[k++];
		foo[i][j++] = '\0';
		i++;
	}
	foo[i] = 0;
	return (foo);
}
