/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:10:17 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 20:39:00 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(const char *ptr, char c)
{
	int			i;
	int			compteur;

	i = 0;
	compteur = 0;
	while (ptr[i] != c && ptr[i])
	{
		i++;
		compteur++;
	}
	return (compteur);
}
