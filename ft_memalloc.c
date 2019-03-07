/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:16:21 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/06 15:49:54 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*fresh;

	fresh = NULL;
	if (size)
	{
		if (!(fresh = (unsigned char *)malloc(size)))
			return (NULL);
		while (size)
			fresh[--size] = 0;
	}
	return ((void *)fresh);
}
