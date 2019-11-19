/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:30:21 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 02:42:13 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = (char*)malloc(sizeof(char const)
	* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
		ptr[i++] = s1[k++];
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
