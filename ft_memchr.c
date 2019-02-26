/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:17:43 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 23:28:01 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *)s;
	i = 0;
	if (ss[i] != c)
		return (NULL);
	else
	{
		while (i < 0)
		{
			if (ss[i] == c)
				return ((void *)&ss[i]);
			i++;
		}
	}
}
