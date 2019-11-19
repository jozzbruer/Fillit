/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:36:53 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 00:39:26 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_negative(int nbr)
{
	char	*foo;
	int		i;
	char	*bar;
	int		digits;

	digits = 1;
	i = 0;
	if (!(bar = ft_positive(nbr * -1)))
		return (NULL);
	while (bar[i])
	{
		digits++;
		i++;
	}
	if (!(foo = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	foo[digits] = '\0';
	foo[0] = '-';
	i = 0;
	while (bar[i])
	{
		foo[i + 1] = bar[i];
		i++;
	}
	return (foo);
}
