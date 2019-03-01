/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:09:54 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/27 22:10:21 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ab1, const char *ab2, size_t n)
{
	char	*source;
	char	*f;
	size_t	size;

	if (*ab1 == '\0')
		return (NULL);
	source = (char *)ab1;
	f = (char *)ab2;
	size = ft_strlen(f);
	if (!(*f))
		return ((char*)ab1);
	if (size == 0)
		return (char *)(source);
	if (size > n)
		return ((char *)NULL);
	while (n-- >= size && *source)
	{
		if (ft_strncmp(source, f, size) == 0)
			return ((char *)source);
		source++;
	}
	return ((char *)NULL);
}
