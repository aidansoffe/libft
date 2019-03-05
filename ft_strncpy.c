/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:58:17 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/28 14:21:53 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	t;

	t = 0;
	while (t < len && src[t] != '\0')
	{
		dst[t] = src[t];
		t++;
	}
	while (t < len)
	{
		dst[t] = '\0';
		t++;
	}
	return (dst);
}
