/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:18:09 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 13:29:33 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		size;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen((char *)s);
	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
