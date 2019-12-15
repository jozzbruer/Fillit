/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoapos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:16:00 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:53:11 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoapos(int n)
{
	int		dig;
	int		ncpy;
	char	*sn;

	dig = 0;
	ncpy = n;
	while (ncpy > 0)
	{
		ncpy = ncpy / 10;
		dig++;
	}
	if (!(sn = malloc(sizeof(char) * (dig + 1))))
		return (NULL);
	sn[dig] = '\0';
	while (dig > 0)
	{
		sn[dig - 1] = (n % 10) + '0';
		n = n / 10;
		dig--;
	}
	return (sn);
}
