/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:15:57 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 18:42:49 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char		*word;
	size_t		i;

	i = 0;
	word = *b;
	while (len > 0)
	{
		word[i] = c;
		word[i++];
		len--;
	}
	return (b);
}
