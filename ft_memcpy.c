/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:12:51 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 17:15:04 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	while (i < n && i >= 0)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
