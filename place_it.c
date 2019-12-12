/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:14:15 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/12 14:35:44 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			solve_it(char **map, t_tetrimino *head)
{
	int		i;
	int		j;

	i = 0;
	if (!head)
		return (1);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (placeable(map, head, i, j) == 1)
			{
				map = place_it(map, head, i, j);
				if (solve_it(map, head->next))
					return (1);
				map = remove_it(map, head, i, j);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int			placeable(char **map, t_tetrimino *head, int i, int j)
{
	int		x;
	int		y;

	x = 0;
	while (map[x])
		x++;
	if (i + head->height > x || j + head->width > x)
		return (0);
	x = 0;
	while (head->line[x])
	{
		y = 0;
		while (head->line[x][y])
		{
			if (head->line[x][y] != '.' && (map[i + x][j + y] != '.'))
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

char		**place_it(char **map, t_tetrimino *head, int i, int j)
{
	int		x;
	int		y;
	int		count;

	x = 0;
	count = 0;
	while (head->line[x])
	{
		y = 0;
		while (head->line[x][y])
		{
			if (head->line[x][y] != '.' && map[i + x][j + y] == '.')
				map[i + x][j + y] = head->alphabet;
			y++;
		}
		x++;
	}
	return (map);
}

char		**remove_it(char **map, t_tetrimino *head, int i, int j)
{
	int		x;
	int		y;

	x = 0;
	while (head->line[x])
	{
		y = 0;
		while (head->line[x][y])
		{
			if (head->line[x][y] != '.')
			{
				map[i + x][j + y] = '.';
			}
			y++;
		}
		x++;
	}
	return (map);
}

void		result_print(char **map)
{
	int		i;
	int		j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
