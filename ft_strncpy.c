/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:58:17 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/26 15:01:39 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_stpcpy(char *dst, const char *src, size_t len)
{
	int	t;

	t = 0;
	while (i < len && src[i] != '\0')
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
