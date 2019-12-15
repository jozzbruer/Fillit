/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:53:43 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/13 00:23:09 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void			fillit(t_tet *head)
{
	char		**map;
	int			size;

	size = 2;
	map = ft_map(size);
	while (solve_it(map, head) == 0)
	{
		ft_kill_map(map, size);
		size++;
		map = ft_map(size);
	}
	result_print(map);
	ft_kill_map(map, size);
}

int				main(int argc, char **argv)
{
	t_tet		head;
	int			fd;

	if (argc != 2)
	{
		write(1, "usage: ./fillit input_sourcefile/n", 33);
		exit(0);
	}
	if ((fd = (open(argv[1], O_RDONLY))) > 0)
		read_file(&head, fd);
	fillit(&head);
	close(fd);
	(fd == -1) ? put_usage() : 0;
	return (0);
}
