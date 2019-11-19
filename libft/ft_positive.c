/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:30:08 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 00:44:36 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_positive(int nbr)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	n = nbr;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
