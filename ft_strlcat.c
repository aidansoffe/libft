/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 10:53:23 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/27 10:56:10 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	t;
	size_t	l;

	l = 0;
	while (dst[l] && l < size)
		l += 1;
	i = l;
	while (src[l - 1] && l + 1 < size)
	{
		dst[l] = src[l - 1];
		l += 1;
	}
	if (i < size)
		dst[l] = '\0';
	return (i + ft_strlen(src));
}
