/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:55:53 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/12/13 00:21:18 by jquince          ###   ########.fr       */
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

typedef struct		s_tet
{
	char			**line;
	char			alphabet;
	int				width;
	int				height;
	struct s_tet	*nex;
}					t_tet;

char				g_a;
int					read_file(t_tet *head, int fd);
char				*valid_file(char *buf, int rd);
char				**add_str(int size);
void				ft_kill_map(char **map, int len);
char				*valid_tetrimino(char *buf);
int					put_usage(void);
char				**ft_map(int length);
void				print_list(t_tet *head);
int					shift_left(char **lspot);
int					shift_upper(char **lspot);
void				fillit(t_tet *head);
int					solve_it(char **map, t_tet *head);
int					placeable(char **map, t_tet *head, int i, int j);
char				**place_it(char **map, t_tet *head, int i, int j);
char				**remove_it(char **map, t_tet *head, int i, int j);
void				result_print(char **map);
int					shift_right(char **lspot);
int					shift_lower(char **lspot);
void				ft_addlst(t_tet *head, char *buf, char g_a);
#endif
