/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:17:21 by jquince           #+#    #+#             */
/*   Updated: 2019/12/11 17:23:00 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_size(char alpha)
{
	int		size;
	int		amount;
	char	a;

	(alpha == 'A') ? (a = 'A') : (a = (alpha - 1));
	a = a - 64;
	amount = a * 4;
	size = 2;
	while (amount > (size * size))
		size++;
	return (size);
}

char		**add_str(int size)
{
	char	**new;

	if (!(new = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	new[size] = NULL;
	while (size >= 0)
	{
		new[size] = NULL;
		size--;
	}
	return (new);
}

void		ft_kill_map(char **map, int len)
{
	int		i;

	i = -1;
	while (++i < (len + 1))
		free(map[i]);
	free(map);
}

char		**ft_map(int length)
{
	char	**map;
	int		i;
	int		j;

	if (!(map = add_str(length)))
		return (0);
	i = 0;
	while (i < length)
	{
		if (!(map[i] = ft_memalloc(length)))
			return (0);
		j = 0;
		while (j < length)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	return (map);
}
