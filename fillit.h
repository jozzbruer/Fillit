/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:55:53 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/11 18:06:18 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 21

typedef struct			s_tetrimino
{
	char				**line;
	char				alphabet;
	int					width;
	int					height;
	struct s_tetrimino	*next;
}						t_tetrimino;

char				alpha;
int					read_file(t_tetrimino *head, char *source);
char				*valid_file(char *buf, char alpha);
char				**add_str(int size);
void				ft_kill_map(char **map, int len);
char				*valid_tetrimino(char *buf, char alpha);
int					put_usage(void);
char				**ft_map(int length);
int					ft_size(char alpha);
void				print_list(t_tetrimino *head);
int					shift_left(char **lspot);
int					shift_upper(char **lspot);
void				fillit(t_tetrimino *head);
int					solve_it(char **map, t_tetrimino *head);
int					placeable(char **map, t_tetrimino *head, int i, int j);
char				**place_it(char **map, t_tetrimino *head, int i, int j);
char				**remove_it(char **map, t_tetrimino *head, int i, int j);
void				result_print(char **map);
int					shift_right(char **lspot);
int					shift_lower(char **lspot);
#endif
