/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:36:15 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/05 00:28:29 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*ss;
	const char	*lasts;
	char		*dd;
	char		*lastd;

	dd = dst;
	ss = src;
	if (dd < ss)
		while (len--)
			*dd++ = *ss++;
	else
	{
		lasts = ss + (len - 1);
		lastd = dd + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
