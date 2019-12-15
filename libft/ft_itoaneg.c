/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaneg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:09:12 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 17:53:01 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoaneg(int n)
{
	int		i;
	char	*con;
	char	*sn;
	int		dig;

	i = 0;
	dig = 1;
	if (!(sn = ft_itoapos(n * -1)))
		return (NULL);
	while (sn[i])
	{
		dig++;
		i++;
	}
	if (!(con = malloc(sizeof(char) * (dig + 1))))
		return (NULL);
	con[dig] = '\0';
	con[0] = '-';
	i = 0;
	while (sn[i])
	{
		con[i + 1] = sn[i];
		i++;
	}
	return (con);
}
