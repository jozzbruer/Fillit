/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:17:27 by jquince           #+#    #+#             */
/*   Updated: 2019/10/10 19:13:58 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	tab[size] = '\0';
	while (size--)
		tab[size] = '\0';
	return (tab);
}
