/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:52:08 by jquince           #+#    #+#             */
/*   Updated: 2019/10/11 14:06:19 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if ((ptr = (char *)malloc(sizeof(char) * (i + 1))))
	{
		i = 0;
		while (s[i])
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
