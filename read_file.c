/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:06:27 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/12 14:52:06 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		put_usage(void)
{
	write(1, "error\n", 6);
	exit(0);
}

char		*valid_tetrimino(char *buf)
{
	int		i;
	int		adj_blk;

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

char		*valid_file(char *buf)
{
	int		i;
	int		nt;

	nt = 0;
	i = -1;
	while (i++ < 20)
	{
		if (i % 5 <= 4)
		{
			if ((buf[i] != '.') || (buf[i] != '#'))
			{
				if (i % 5 == 4 && buf[i] != '\n')
					return (0);
			}
			if (buf[i] == '#')
				nt++;	
		}
	}
	if (nt != 4)
		return (0);
	return (buf);
}

void		ft_addlst(t_tetrimino *head, char *buf, char alpha)
{
	char	**lspot;
	int		height;
	int		width;

	width = 4;
	height = 4;
	lspot = ft_strsplit(buf, '\n');
	while (shift_right(lspot) == 1);
	while (shift_lower(lspot) == 1);
	while (shift_left(lspot) == 1)
		width--;
	while (shift_upper(lspot) == 1)
		height--;
	head->line = lspot;
	head->alphabet = alpha;
	head->next = NULL;
	head->height = height;
	head->width = width;
}

int				read_file(t_tetrimino *head, char *source)
{
	int			fd;
	int			rd;
	char		buf[BUFF_SIZE];
	t_tetrimino	*beg;

	alpha = 'A';
	(fd = (open(source, O_RDONLY)));
	(fd == -1) ? put_usage() : 0;
	if (fd > 0)
	{
		beg = head;
		while ((rd = (read(fd, buf, BUFF_SIZE))) >= 19)
		{
			buf[rd] = '\0';
			if (!(((valid_file(buf)))) || (!(valid_tetrimino(buf))))
				put_usage();
			alpha != 'A' ? (head->next = ((t_tetrimino *)malloc(sizeof(t_tetrimino) * 1))) : 0;
			alpha != 'A' ? (head = head->next) : 0;
			ft_addlst(head, buf, alpha);
			++alpha;
		}
		head = beg;
		close(fd);
	}
	return (0);
}
