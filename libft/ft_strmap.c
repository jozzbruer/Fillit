/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-la-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:03:11 by lde-la-g          #+#    #+#             */
/*   Updated: 2019/10/14 16:28:58 by lde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			i++;
		}
		if (!(s1 = (malloc(sizeof(char) * (i + 1)))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	return (NULL);
}
