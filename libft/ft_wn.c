/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:05:36 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 14:00:19 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_wn(const char *str, char c)
{
	bool	mot;
	int		i;
	int		compteur;

	mot = 0;
	i = 0;
	compteur = 0;
	while (str[i])
	{
		if (str[i] == c)
			mot = 0;
		else
		{
			if (mot == 0)
				compteur++;
			mot = 1;
		}
		i++;
	}
	return (compteur);
}
