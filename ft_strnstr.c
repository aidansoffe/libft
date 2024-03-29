/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:09:54 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/05 00:39:40 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	char	*s;
	char	*f;
	size_t	size;

	if (*str == '\0')
		return (NULL);
	s = (char *)str;
	f = (char *)substr;
	size = ft_strlen(f);
	if (!(*f))
		return ((char*)str);
	if (size == 0)
		return (char *)(s);
	if (size > n)
		return ((char *)NULL);
	while (n-- >= size && *s)
	{
		if (ft_strncmp(s, f, size) == 0)
			return ((char *)s);
		s++;
	}
	return ((char *)NULL);
}
