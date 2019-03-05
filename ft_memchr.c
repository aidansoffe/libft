/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:17:43 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/05 00:31:05 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	size_t	i;

	ss = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ss[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
