/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:09:39 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 18:55:46 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**splt;
	int		w;
	int		i;
	int		wz;
	int		postr;

	if (!s)
		return (NULL);
	w = ft_countw(s, c);
	if (!(splt = (char **)malloc(sizeof(char *) * (w + 1))))
		return (NULL);
	i = 0;
	while (i < w)
	{
		wz = ft_word(s, c, i);
		postr = ft_wordpos(s, c, i);
		splt[i] = ft_strsub(s, postr, wz);
		i++;
	}
	splt[i] = NULL;
	return (splt);
}
