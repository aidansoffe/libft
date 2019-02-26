/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:36:15 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 23:50:18 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ndst;
	const char	*nsrc;
	size_t		i;

	ndst = (char *)dst;
	nsrc = (const char *)src;
	i = 0;
	while (i < len)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
