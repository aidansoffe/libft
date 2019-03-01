/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:09:57 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 19:21:48 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;
	int				i;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	i = 0;
	while (n-- > 0)
	{
		if (nsrc[i] == (char)c)
		{
			ndst[i] = nsrc[i];
			return (ndst[i + 1]);
		}
		ndst[i] = nsrc[i];
		i++;
	}
	return (NULL);
}
