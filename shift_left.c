/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:06:35 by jquince           #+#    #+#             */
/*   Updated: 2019/12/11 17:54:47 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		shift_left(char **lspot)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (lspot[i][0] == '.')
			count++;
		i++;
	}
	if (count == 4)
	{
		i = 0;
		while (i < 4)
		{
			lspot[i][0] = lspot[i][1];
			lspot[i][1] = lspot[i][2];
			lspot[i][2] = lspot[i][3];
			lspot[i][3] = '.';
			i++;
		}
		return (1);
	}
	return (0);
}

int		shift_upper(char **lspot)
{
	if (!ft_strchr(lspot[0], '#'))
	{
		free(lspot[0]);
		lspot[0] = lspot[1];
		lspot[1] = lspot[2];
		lspot[2] = lspot[3];
		lspot[3] = ft_strdup("....");
		return (1);
	}
	return (0);
}

int		shift_right(char **lspot)
{
	int	count;
	int	i;

	i = 3;
	count = 0;
	while (i >= 0)
	{
		if (lspot[i][3] == '.')
			count++;
		i--;
	}
	if (count == 4)
	{
		i = 0;
		while (i < 4)
		{
			lspot[i][3] = lspot[i][2];
			lspot[i][2] = lspot[i][1];
			lspot[i][1] = lspot[i][0];
			lspot[i][0] = '.';
			i++;
		}
		return (1);
	}
	return (0);
}

int		shift_lower(char **lspot)
{
	if (!ft_strchr(lspot[3], '#'))
	{
		free(lspot[3]);
		lspot[3] = lspot[2];
		lspot[2] = lspot[1];
		lspot[1] = lspot[0];
		lspot[0] = ft_strdup("....");
		return (1);
	}
	return (0);
}
