/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:06:27 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/13 00:22:56 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				put_usage(void)
{
	write(1, "error\n", 6);
	exit(0);
}

char			*valid_tetrimino(char *buf)
{
	int			i;
	int			adj_blk;

	adj_blk = 0;
	i = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if (buf[i + 5] == '#' && (i + 5) < 20)
				adj_blk += 1;
			if (buf[i + 1] == '#' && (i + 1) < 20)
				adj_blk += 1;
			if (buf[i - 5] == '#' && (i - 5) >= 0)
				adj_blk += 1;
			if (buf[i - 1] == '#' && (i - 1) >= 0)
				adj_blk += 1;
		}
		i++;
	}
	if (adj_blk == 6 || adj_blk == 8)
		return (buf);
	return (0);
}

char			*valid_file(char *buf, int rd)
{
	int			i;
	int			nt;

	nt = 0;
	i = 0;
	while (i < 20 && buf[i] != '\0')
	{
		if (i % 5 < 4 && ((buf[i] != '.') && (buf[i] != '#')))
			return (0);
		if (i % 5 == 4 && buf[i] != '\n')
			return (0);
		if (buf[i] == '#')
			nt++;
		i++;
	}
	if (rd == 21 && buf[rd - 1] != '\n')
		return (0);
	if (nt != 4)
		return (0);
	return (buf);
}

void			ft_addlst(t_tet *head, char *buf, char g_a)
{
	char		**lspot;
	int			height;
	int			width;
	int			ret;

	width = 4;
	height = 4;
	lspot = ft_strsplit(buf, '\n');
	ret = 1;
	while (ret)
		ret = shift_right(lspot);
	ret = 1;
	while (ret)
		ret = shift_lower(lspot);
	while (shift_left(lspot) == 1)
		width--;
	while (shift_upper(lspot) == 1)
		height--;
	head->line = lspot;
	head->alphabet = g_a;
	head->nex = NULL;
	head->height = height;
	head->width = width;
}

int				read_file(t_tet *head, int fd)
{
	int			rd;
	char		buf[BUFF_SIZE + 1];
	t_tet		*beg;
	int			rd_prev;

	g_a = 'A';
	beg = head;
	rd_prev = 0;
	while ((rd = (read(fd, buf, BUFF_SIZE))) != 0)
	{
		rd < 19 ? put_usage() : 0;
		buf[rd] = '\0';
		if (!(((valid_file(buf, rd)))) || (!(valid_tetrimino(buf))))
			put_usage();
		g_a != 'A' ? (head->nex = ((t_tet *)malloc(sizeof(t_tet) * 1))) : 0;
		g_a != 'A' ? (head = head->nex) : 0;
		ft_addlst(head, buf, g_a);
		++g_a;
		rd_prev = rd;
	}
	(rd_prev > 20) || (rd_prev == 0) ? put_usage() : 0;
	head = beg;
	return (0);
}
