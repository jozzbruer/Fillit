/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:35:46 by jquince           #+#    #+#             */
/*   Updated: 2019/09/20 22:22:12 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char *a;

	a = (char *)b;
	while (len--)
	{
		*a = (unsigned char)c;
		++a;
	}
	return (b);
}
